#include<stdio.h>
#define pos(a,p) (a&(1<<p)?1:0)
int main()
{
	int a,p;
	printf("enter number and position : ");
	scanf("%d %d",&a,&p);
	printf("set  %d\n",a|1<<p);
	printf("clear %d\n",a&~(1<<p));
	printf("toggle %d\n",a^1<<p);
	printf("set or not : %d",pos(a,p));
}
