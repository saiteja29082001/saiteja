#include<stdio.h>
int main()
{
	unsigned int n,k=0;
	scanf("%d",&n);
	for(int i=0;i<31;i=i+2)
	{
	if(n&0x1<<i)
		k++;	
	}

	if(k==1)
	printf("power of 4\n");
	else
	printf("not power of 4\n");


}
