#include<stdio.h>
void display(int a[],int size);
int main()
{
	int a[]={1,2,3,4,5};
	int size;
	size=sizeof(a)/sizeof(int);
	display(a,size);
}
void display(int a[],int limit)
{
	int i;
	for(i=0;i<limit;i++)
	{
		printf("%d",a[i]);
	}
}

