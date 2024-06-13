#include <stdio.h>
int main() {
	int n = 5, i,j=0;
	int a[5] = {1, 0, 0, 4, 5};
	int a1[5] = {0};

	for (i = 0,j=0; i < n; i++) {
		if (a[i] != 0) {
			a1[j] = a[i];
			j++;
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a1[i]);
	}

	return 0;
}

/*#include<stdio.h>
  int main()
  {
  int n=5,i;
  int a[5]={1,0,0,4,5};
  int a1[5]={0};
  for(i=0;i<n;i++)
  {
  if(a[i]!=0)
  a1[i]=a[i];
  }
  for(i=0;i<n;i++)
  printf("%d ",a1[i]);
  }*/
