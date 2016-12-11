/*====================================================
       File: vov_or_con.c
	 Author: Ritwick Malhotra
       Date: 19 Oct 2016
 Assignment: EPFU Week 3: Vowel or consonant?
Description: Check whether a character is vowel or 
        consonant. In case of vowel check also if it
        is capital or small letter. Print proper 
        message: "vowel", "VOWEL" or "cosonant". 
        Use "switch" statement.
=======================================================*/
#include <stdio.h>

int main(){
	char check;
	scanf("%c", &check);
	switch(check){
		case 'a': 
	    case 'e': 
		case 'i': 
		case 'o': 
		case 'u': 
			printf("vowel\n");
			break;
		case 'A': 			
		case 'E': 
		case 'I': 
		case 'O': 
		case 'U': 
			printf("VOWEL\n");
			break;	
		default: 
			printf("consonant\n");			
			break;
	}
	return 0;
}