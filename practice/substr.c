
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int k;
void * mystrncpy(const char d[],int s,int n)
{
	int i,j;
	char *a=(char *)malloc(n+1);
	for(i=0;i<n;i++)
	{
		*(a+i)=d[i+s];

	}
	*(a+i)=0;
	return a;		
}	
int main()
{
	char d[100];
	int n,s;
	scanf(" %[^\n]d",d);
	scanf("%d %d",&s,&n);
	char *a=mystrncpy(d,s,n);
	printf("%s\n",a);
	return 0;
}	
