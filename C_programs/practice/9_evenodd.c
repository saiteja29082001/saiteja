#include<stdio.h>
int main()
{
	unsigned int n,k=0;
	scanf("%d",&n);

	if(n&0x1 == 1)
	printf("odd\n");
	else
	printf("even\n");
}
