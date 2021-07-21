#include<stdio.h>
int a[4]={1,2,3,4};
int main()
{
	int *p=a;
	int i=0,size;
	size=sizeof(a)/sizeof(int);
	display(p,size);
}
void display(int *[],int limit)
{
	int i;
	for(i=0;i<limit;i++)
	{
		printf("%d",*[p+i]);
	}
}

