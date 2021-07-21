#include<stdio.h>
int main()
{
	int a[10],i=0,size;
	priintf("Enter the number\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0;
	for(i=0;i<size;i++)
	{
		if(a[i]<max)
		{
		max=a[i];
	}
}
}
