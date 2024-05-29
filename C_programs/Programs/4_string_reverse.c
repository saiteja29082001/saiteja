//Write a C program to reverse a string Updated!
#include<stdio.h>
#include<string.h>
int main()
{
	char ar[100],ch;
	printf("Enter string : ");
	scanf("%[^\n]s",ar);
	int k, a= k=strlen(ar);
	for(int i=0;i<k/2;i++)
		{   
			ch = ar[i];
			ar[i] = ar[a-1];
			ar[a-1] = ch;
			a--;
		} 	

	printf("Reverse of string : %s\n",ar);
}
