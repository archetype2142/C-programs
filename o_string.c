/*====================================================
	   File: order_strings.c 
     Author: Ritwick Malhotra
       Date: 21 Nov 2016

 Assignment: EPFU Week 5 Pointers: Sort array of strings
Description: Read 4 characters length strings from 
 		standard input into an array. Strings are 
 		separated by new line, last string is equal 
 		to "_" and it should be ommited. Sort the 
 		elements of array in reverse order using a 
 		pointer. Maximal number of elements is 20. You
 		can use strcmp to as string comparator (string.h).
=======================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void printy(char [20][5], int);

int main() { 
	char array[20][5];
	char temp[4];

	int flag = 0;
	for(int i = 0; i < 20; i++) {
		scanf("%s", array[i]);
		if(strcmp(array[i], "_") == 0) {
			flag = i;
			break;
		}
	}
	
	for(int j = 0; j <= flag - 1; j++) {
		for(int p = j + 1; p <= flag; p++) {
			if(strcmp(array[j], array[p]) < 0) {
				strcpy(temp, array[j]);
				strcpy(array[j], array[p]);
				strcpy(array[p], temp);
			}
		}
	}

	printy(array, flag);

	return 0;
}

void printy(char array[20][5], int flag) {
	if(isdigit(*array[1])){
		for(int j = 1; j <= flag; j++){
			printf("%s\n", array[j]);
		}
	}	
	else {
		for(int j = 0; j <= flag - 1; j++){
			printf("%s\n", array[j]);
		}
	}
}
