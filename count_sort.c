/*=================================================
  File: count_sort.c 
  Author: Ritwick Malhotra
  Date:  Nov 2016

  Assignment: count occurence of letters in a text
  file input by user.
===================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
  
  	struct alpha {
  		int character;
  		int occurance;
  	} alph[123], temp;

  	int count[256] = { 0 };
  	int k = 0, c = 0;
  	char filename[100];
  	scanf("%s", filename);

  	FILE *fin = fopen(filename, "r");

  	while((c = tolower(fgetc(fin)))) {
    	if(c == EOF) 
    		break;
    	count[c] += 1;
  	}

  	for(k = 97; k < 123; k++) {
  		alph[k].character = k;
  		alph[k].occurance = count[k];
  	}
  	
  	for(int i = 98; i < 123; i++) {
  		for (int j = 97; j < 122; j++) {
  			if(alph[j].occurance < alph[j + 1].occurance) {
  				temp = alph[j];
  				alph[j] = alph[j + 1];
  				alph[j + 1] = temp;
  			}
  		}
  	}
  	
  	for (int i = 97; i < 123; i++) {
  		printf("%c: %d\n", (char)alph[i].character, alph[i].occurance);
  	}

  	fclose(fin);
  	return 0;
}