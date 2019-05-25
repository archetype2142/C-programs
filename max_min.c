/*====================================================
    File: max_min.c
	Author: Ritwick Malhotra
    Date: 12 Nov 2016
 	
 	Assignment: EPFU Week 4 Functions: Leading digit
	Description: Write a program that will read three 
		integers separated by new line from the 
		keyboard. Design functions: - maxval, which 
		takes two integers and returns the lowest one, 
		minval, which takes two integers and returns 
		the largest one. Use them in main function and 
		print values on the screen separated by space.
=======================================================*/

#include <stdio.h>

int maxval(int, int, int);
int minval(int, int, int);

int main(int argc, char const *argv[]) {
	int num1, num2, num3;
	scanf("%d\n%d\n%d", &num1, &num2, &num3);
	printf("%d %d", maxval(num1, num2, num3), minval(num1, num2, num3));
	return 0;
}

int minval(int x, int y, int z) {
	int max = 0;
	if(x > max)  max = x;
	if(y > max)  max = y;
	if(z > max) max = z;
	return max;
}

int maxval(int x, int y, int z) {
	int min = 0;
	if(x < y && x < z)  min = x;
	else if(y < z && y < x) min = y;
	else min = z;
	return min;
}
