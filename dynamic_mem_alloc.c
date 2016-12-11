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
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void bsort(float [], int);
float avgret(float [], int);

int main() {

	float array[4000];
	int i = 0;
	
	while(scanf("%f", &array[i])){
		if(isdigit(array[i]))
			break;
		i++;
	}
	bsort(array, i);
	printf("count: %d\n", i);
	printf("avg: %f\n", avgret(array, i));
	printf("min: %f\n", array[0]);
	printf("max: %f\n", array[i - 1]);
	return 0;
}

float avgret(float arr[], int size) {
	float sum = 0, avg = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	avg = sum/size;
	return avg;
}

void bsort(float arr[], int size) {
    float temp;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}