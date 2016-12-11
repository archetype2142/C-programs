/*====================================================
	   File: stirling_sec_kind.c 
     Author: Ritwick Malhotra
       Date: 2 Dec 2016

 Assignment: EPFU Week 8 - Stirling numbers of second 
 		kind.
=======================================================*/
#include <stdio.h>
#include <math.h>

long long stirling(int, int);

int main(int argc, char const *argv[]) {
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d: %lld\n", i, stirling(n, i));
	}
	return 0;
}

long long stirling(int n, int k) {
    if (k == 1 || k == n)
        return 1;

    return (k * stirling(n - 1, k) + stirling(n - 1, k - 1));
}