#include<stdio.h>
int main()
{
	unsigned int n;
	scanf("%d",&n);
	if((n&(n-1))==0)
	printf("power of 2\n");
	else
	printf("not power of 2\n");

}
