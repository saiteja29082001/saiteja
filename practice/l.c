// C program to illustrate 
// size of struct 
#include <stdio.h> 

int main() 
{ 

	struct B { 
		// sizeof(double) = 8 
                char c[7];
		char x; 
		double z; 
                int a;
                int k;
		double s; 

		// sizeof(int) = 4 
		// sizeof(short int) = 2 
		//short int y; 
		// Padding of 2 bytes 
	}k1; 
         //   strcpy(k1.c,"uday");
            scanf(" %s",k1.c);
	printf("Size of struct: %s", k1.c); 
	printf("Size of struct: %ld", sizeof(long long int)); 

	return 0; 
} 

