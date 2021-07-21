//program to find the maximum element in array
#include<stdio.h>
int main()
{
	int a[5],max=0,i=0;
	pintf("enter the element");
	scanf("%d",&a[5]);
	for(i=0;i>5;i++)
	{
		if(a[i]>max)//if(1>max,2>max,3>max)
		max=a[i];
	}
	printf("The number of element%d",a[i]);
}
