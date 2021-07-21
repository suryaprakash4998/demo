#include<stdio.h>
int main()
{
	int a[10],i=0,size;
	priintf("Enter the number\n");
	scanf("%d",&size);//
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0,min=0,j=0;
	for(i=1;a[i]<size;i++)
	{
		if(a[i]>max)
		max=a[i];
		printf("The maxiimum number is:%d",max);
	}
	if(a[i]<min)
	min=a[j];
	printf("The minimum number is:%d",min);
}

