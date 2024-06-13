#include<stdio.h>
int main()
{
	 int n,k=0;
	scanf("%d",&n);

	if((n&(0x1<<31)))
	printf("negative\n");
	else
	printf("positive\n");
}
