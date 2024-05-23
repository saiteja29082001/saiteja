#include<stdio.h>
int powr(int a,int n)
{
	int k=1;
	for(int i=0;i<n;i++)
	{
		k=k*a;
	}
	return k;
}

int main()
{
	int a,k=0;
	scanf("%d",&a);
	for(int i=0;i<31;i++)
	{
		if(a%10)
		{
			k=k+powr(2,i);
		}	
		a=a/10;
	}
	printf("%d",k);
}
