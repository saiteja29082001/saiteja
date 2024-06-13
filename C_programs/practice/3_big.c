#include<stdio.h>
#define big(a,b) (a>b?a:b)
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",big(a,b));
}
