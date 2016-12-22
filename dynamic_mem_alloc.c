/*====================================================
       File: dynamic_mem_alloc.c 
     Author: Ritwick Malhotra
       Date: 10 Dec 2016

 Assignment: EPFU 9 – memory management, i/o: 
		Dynamic memory allocation 1
Description: Read the numbers from the input, put them
 		into the dynamicaly allocated array. Enlarge 
 		the array when needed. Stop reading the numbers
 		when the '#' character occurs. Write: number of
 		numbers avearage of numbers minimum maximum
=======================================================*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float avgret(int [], int);

int main() {

	int *arr, max = 0, min = 0;
	char temp[500];
	arr = (int *)malloc(sizeof(int));
	int i = -1;
	
	while(1) {
		i++;
        arr = (int *)realloc(arr, (i + 1) * sizeof(int));
        scanf("%s", temp);
        if(temp[0] == '#') 
        	break;
        arr[i] = atoi(temp);
    }

    min = arr[0];
    for (int k = 0 ; k < i ; k++) {
        if (min > arr[k]) 
        	min = arr[k];
    }
    max = arr[0];
    for (int k = 0 ; k < i ; k++)
    {
        if (max < arr[k]) 
        	max = arr[k];
    }
	printf("count: %d\n", i);
	printf("avg: %f\n", avgret(arr, i));
	printf("min: %f\n", (float)min);
	printf("max: %f\n", (float)max);

	free(arr);
	return 0;
}

float avgret(int arr[], int size) {
	float sum = 0, avg = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	avg = sum/size;
	return avg;
}
