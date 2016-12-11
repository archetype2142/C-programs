/*====================================================
	      File: into_arr_and_rev.c 
	    Author: Ritwick Malhotra
          Date: 17 Nov 2016

	Assignment: Read 10 integers (separated by new line)
	 	from standard input. Put them into an array and
	 	print the elements of array in reverse order using
	 	a pointer.
=======================================================*/
#include <stdio.h>

int main() {
	int array[10];
	int *ptr;
	for(int i = 0; i < 10; i++)
		scanf("%d", &array[i]);	

	ptr = &array[9];

	for(int j = 9; j >= 0; --j) {
		printf("%d ", *ptr--);
	}
}