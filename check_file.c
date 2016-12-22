#include <stdio.h>

int main(int argc, char const *argv[]) {
	
	char filename[500];
	scanf("%s", filename);
	FILE *fin = fopen(filename, "r");
	if(fin) {
		printf("File %s exists\n", filename);
		fclose(fin);
	}
	else
		printf("File %s does not exist\n", filename);
	return 0;
}