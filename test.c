/*=================================================
    File: array_of_strings_sort.c 
    Author: Ritwick Malhotra
    Date:  Nov 2016

	Assignment: calculate max row and max column 
	count by randomly generated square matrix 
	within given limit eg: 
	./program [size] [lower_lim] [upper_lim]
	./program 5 1 100
===================================================*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	
	int z, x, y, a[100][100], r[100], c[100];
	int f, g;
	z = atoi(argv[1]);
	x = atoi(argv[2]);
	y = atoi(argv[3]);

	srand(time(NULL));
	for (int i = 0; i < z; i++) {
		for (int j = 0; j < z; j++) {
			a[i][j] = rand() % (y - x) + x;
		}
	}

	for (int i = 0; i < z; ++i) {
		for (int j = 0; j < z; ++j) {
			r[i] += a[i][j];
			c[i] += a[j][i];
			printf("%d ", a[i][j]);
		}	
		printf("\n");
	}

	int p = r[0];
	for (int i = 0; i < z; ++i) {
		printf("%d, ", r[i]);
		if(r[i] > p) {
			p = r[i];
			f = i + 1;
		}
	}
	printf("\nMAX ROW: %d\n", f);
	
	int q = c[0];
	for (int i = 0; i < z; ++i) {
		printf("%d, ", c[i]);
		if(c[i] > q) {
			q = c[i];
			g = i + 1;
		}
	}
	printf("\nMAX COLUMN: %d\n", g);

	return 0;
}
