/* ==================================
Desc: Use of environmental variables
File: env.c 
=====================================*/
#include <stdio.h>

void newline (void);

main (int argc ,char *argv[], char *env[]) {
	int count = 0;
	printf (" List of the environment arguments "
		" of the command line :\n \n ");
	for (count=0; env[count] != 0; count++)
		printf ("%s \n " , env[count]);
	newline();
}
void newline ( void ) {
	printf ("\n");
}