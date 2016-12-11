/*====================================================
	   File: multable.c 
   	 Author: Ritwick Malhotra
	   Date: 13 Nov 2016

 Assignment: EPFU Week 4 Functions: Multiplication table
Description: Prepare code that will output the 
	multiplication table as shown below. Size of the 
	table should be read from keyboard. Your task is to
	prepare a function that prints single row of table.
=======================================================*/
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for(int j = 1; j <= num; j++) {
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}