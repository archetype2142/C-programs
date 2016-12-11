/*====================================================
       File: leading_digit.c
	 Author: Ritwick Malhotra
       Date: 12 Nov 2016
 Assignment: EPFU Week 4 Functions: Leading digit
Description: Design a function that takes an integer 
		as input and returns the leading digit (decimal 
		representation assumed). Read integer from 
		standard keyboard and use your function to 
		obtain the leading digit. Print the digit on 
		the screen.
=======================================================*/
#include <stdio.h>

int leading_digit(int);
int main() { 
	int num;
	scanf("%d", &num);
	printf("%d\n",leading_digit(num));
	return 0;
}

int leading_digit(int x) {
    while (x > 9) {
        x /= 10;
    }
    return x;
}