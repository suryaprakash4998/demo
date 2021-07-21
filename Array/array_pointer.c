#include<stdio.h>
int a[3]={1,2,3};
int main()
{
	int *p=a;
	printf("%d",a[1]);
	printf("%d",*(p+1));
}
