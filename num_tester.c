/*====================================================
       File: num_tester.c
	 Author: Ritwick Malhotra
       Date: 19 Oct 2016
 Assignment: EPFU Week 3: Negative, positive or zero?
Description: Check if a float number is positive, 
        negative or zero. Use if...else statement. 
        Print one of the messages: "positive", 
        "negative", "zero".
=======================================================*/
#include <stdio.h>

int main(){
	float number;
	scanf("%f", &number);

	if(number < 0)
		printf("negative\n");
	else if(number > 0)
		printf("positive\n");
	else
		printf("zero\n");
	return 0;
}