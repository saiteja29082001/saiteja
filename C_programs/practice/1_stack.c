//2) How to know the STACK is growing up/down?
//
#include<stdio.h>
int main()
{
	char c[2];
	if(&c[0] - &c[1] == 1)
		printf("down\n");
	else
		printf("up\n");
	

	return 0;
}	
