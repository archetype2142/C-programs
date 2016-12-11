/*====================================================
	      File: treemaker.c 
	    Author: Ritwick Malhotra
          Date: 13 Nov 2016

	Assignment: EPFU Week 4 Functions: Get prepared for
		printing chirstmas trees.
 Description: Design a function that print the following
 		figure on the screen:
			------*
			-----**
			----***
			---****
			--*****
			-******
			*******
		The function should have a parameter - the height
		of the figure. Your program should read the 
		height from standard input and then use your 
		function to print the shape.
=======================================================*/
#include <stdio.h>

void treeMaker(int);

int main() {
	int x;
	scanf("%d", &x);
	treeMaker(x);
	return 0;
}

void treeMaker(int size) {
	for(int i = 1; i <= size; i++) {
		for (int j = size; j > i; j--) {
			printf("-");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
}
