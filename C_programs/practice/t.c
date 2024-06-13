#include<stdio.h>
extern int *s;
void (*k)();
int foo()
{
	(*k)();	
	printf("%d",*s);
	return 0;
}
