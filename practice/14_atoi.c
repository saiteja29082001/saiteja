
#include<stdio.h>
#include<string.h>
int k=0;
int myatoi(char d[],int d1)
{
	for(int i=0;i<=d1;i++)
	{
		if(d[i]>=48 && d[i]<=56)
			k=k*10+d[i]-48;
		else
			break;

	}
	return k;	
}	
int main()
{
	char d[100];
	scanf("%[^\n]s",d);
	printf("%d\n",myatoi(d,strlen(d)));
			return 0;
}			
