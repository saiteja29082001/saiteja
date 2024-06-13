#include<stdio.h>
static int p=10;
int *s=&p;
int *s;
int foo();

struct st
{
	const int k;
};

struct st z;
static void fun()
{
	scanf("%d",&z.k);
	printf("hello %d\n",z.k);
	scanf("%d",&z.k);
	printf("hello %d\n",z.k);
}
void (*k)() = fun;

int main()
{
	foo();
	 int const h=10;
	// h=9;
	int *p;
	scanf("%d",&h);
	printf("Hello world p:%d\n",sizeof(p));
	return 0;
}	
