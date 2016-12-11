/*=================================================
      File: array_of_strings_sort.c 
    Author: Ritwick Malhotra
      Date:  Nov 2016

Assignment: Read 5 strings from standard input and
    put them in an array. Each string is 4 characters
    length. Then prepare a function, that swaps i-th
    and j-th elements of the array. Indexes of i and
    j are given as standard input as two numbers 
    separated by space. There can be more than one
    operations - each swap operation is separated by
    new line. Values -1 and -1 denote the end of 
    operations. Print strings separated by new line.
===================================================*/
#include <stdio.h>

void swaper(char a[][4], int m, int n) {
    char temp;
    int u = 0;
    while(u < 4) {
        temp = a[m][u];
        a[m][u] = a[n][u];
        a[n][u] = temp;
        u++;
    }
}

int main() {
    char words[5][4];
    int m, n;
    
    for(int a = 0; a < 5; a++) {
        scanf("%s", words[a]);
    }
    
    while(m != -1 || n != -1) {
        scanf("%d %d", &m, &n);
        swaper(words, m, n);
    }
    
    for(int a = 0; a < 5; a++) {
        for(int b = 0; b < 4; b++)
            printf("%c", words[a][b]);
        printf("\n");
    }
    
    return 0;
}