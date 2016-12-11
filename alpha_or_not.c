/*====================================================
	      File: alpha_or_not.c 
	    Author: Ritwick Malhotra
          Date: 19 Oct 2016

	Assignment: EPFU Week 3: Check whether a character 
          is an alphabet or not
 Description: Check whether a character read from 
          standard input is an alphabet or not. Print 
          YES or NO message.
=======================================================*/
#include <stdio.h>

int main(int argc, char const *argv[]) {
  
  char input;
  scanf("%c", &input);

  if ((input >= 'a' && input <= 'z') || ( input >= 'A' && input <= 'Z'))
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}