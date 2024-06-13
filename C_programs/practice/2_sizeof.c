//2) How to know the STACK is growing up/down?

#include<stdio.h>

#define mysizeof(x) ({typeof(x)y; ((char *)(&y+1) - (char *)(&y));})
//#define mysizeof(X)       ({typeof(X) Y; ((char*)(&Y+1) - (char*)(&Y));})

int main()
{
	int a=3;
	typeof(3) k =9;
	printf("%d",k);
	//int k = (char)a;
		printf("size of a %d\n",mysizeof(a));
		printf("size of a %d\n",mysizeof(int));
		printf("size of a %d\n",mysizeof(3));
	

	return 0;
}	
