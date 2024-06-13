#include <stdio.h>
#include <string.h>




void printLargestPalindrome(char *str) {
 int i,j;
 char c[100];
 strcpy(c,str);

 for(i=0;str[i] != 0;i++)
 {
     for(j=0;j<=i;j++)
     {
               
     }
     printf(" %c",str[i]);
 } 
}

int main() {
    char str[] = "good morning";

    printf("Original string: %s\n", str);
    printLargestPalindrome(str);

    return 0;
}

