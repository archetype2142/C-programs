#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void count(char [],int []);

int main() {
  char str1[100], str2[100];
  int i, j, flag = 1, s1[26] = {0}, s2[26] = {0};

  scanf("%s %s",str1, str2);

  if(strlen(str1)!=strlen(str2)) {
    printf("NO");
    exit(0);
 }

 count(str1, s1);
 count(str2, s2);

    for(i = 0; i < 26; ++i) {
       if(s1[i] != s2[i]) {
         flag = 0;
         break;
      }
   }

   if(flag)
    printf("YES");
   else
    printf("NO");

 return 0;
}

void count(char str[],int s[]) {
   int i = 0,j,count;
   while(str[i] != '\0') {
   j = 0;
   count = 0;
   while(str[j]!='\0') {
      if(str[i] == str[j])
        count++;
      j++;
   }
  s[str[i]-97]=count;
  i++;
}
}
