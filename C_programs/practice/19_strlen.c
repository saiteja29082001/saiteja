
#include<stdio.h>
int mystrlen(const char d[])
{
	int i=0;
	while(d[i]!=0)
	{
		i++;
	}		
	return i;
			
}	
int main()
{
	char d[100];
	scanf("%[^\n]s",d);
	printf("%d\n",mystrlen(d));

	return 0;
}	
