/*====================================================
       File: largest_num_check.c
	 Author: Ritwick Malhotra
       Date: 19 Oct 2016
 Assignment: EPFU Week 3: Find and print the largest
	        number among three numbers
Description: Find and print the largest number among
           three numbers provided by a user and 
           separated with comma. Do not use min/max 
           functions or macros. Use 'if else' statement.
=======================================================*/
#include <stdio.h>
int main() {
  int a,b,c;
  scanf ("%d, %d, %d", &a, &b, &c);
  int max = a;

  if(b > max)
    max = b;
  if(c > max)
    max = c;

  printf("%d\n", max);
  return 0;
}