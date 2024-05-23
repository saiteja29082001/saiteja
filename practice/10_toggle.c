#include<stdio.h>
int main()
{
	int n,k=0x0,p=0x0;
	scanf("%x",&n);
	for(int i=0,j=31;i<32||j<=0;i++,j--)
	{
		k=(k<<i)|(n&(0x1<<j));
	}
	printf("%d \n",p);
}
