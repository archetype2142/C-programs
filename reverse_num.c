/*====================================================
    File: reverse_num.c
	Author: Ritwick Malhotra
    Date: 19 Oct 2016
 	
 	Assignment: EPFU Week 3: Reverse an integer
	Description: Read interger from standard input and 
        reverse it. Use "while" statement.
=======================================================*/
#include <stdio.h>

int main(){
	int num, reverse = 0;
	scanf("%d", &num);

	while(num != 0){
		reverse = reverse*10 + num%10;
		num /= 10;
	}

	printf("%d", reverse);
	return 0;
}
