#include<stdio.h>
int dec(int n)
{
    int a[31];

	for(int i=0;i<=31;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	
	for(int i=31;i>=0;i--)
	{
		printf("%d",a[i]);
	}
    
}

int main()
{
	int n,k=0;
	scanf("%d",&n);
        dec(n);

}
