#include<stdio.h>
#define big(a,b,c) (a>b?a>c?a:c:b>c?b:c)
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",big(a,b,c));
}
