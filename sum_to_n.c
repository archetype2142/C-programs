/*====================================================
       File: sum_to_n.c
	 Author: Ritwick Malhotra
       Date: 19 Oct 2016
 Assignment: EPFU Week 3: Sum of M numbers starting with N
Description: Calculate sum of M natural numbers starting
        from N, where N and M should be read from 
        standard input (separated by space). User FOR 
        statement.
=======================================================*/
#include <stdio.h>

int main(){
	int start, length, sum;
	scanf("%d %d", &start, &length);

	for(int i = start, j = 0; j < length; i++, j++)
		sum += i;

	printf("%d", sum);
	return 0;
}