/*====================================================
	   File: tribbonicci.c 
     Author: Ritwick Malhotra
       Date: 2 Dec 2016

 Assignment: EPFU Week 8 - Tribbonicci Sequence 
=======================================================*/
#include <stdio.h>

int tribbonicci(int);

int main(int argc, char const *argv[]) {
	int num;
	scanf("%d", &num);
	for(int i = 0; i <= num; i++) { 
		printf("%d ", tribbonicci(i));
	}
	return 0;
}

int tribbonicci(int n) {
	if(n == 0) 
		return 0;
	else if(n == 1)
		return 1;
	else if(n == 2)
		return 1;
	else
		return tribbonicci(n - 1) + tribbonicci(n - 2) + tribbonicci(n - 3);
}