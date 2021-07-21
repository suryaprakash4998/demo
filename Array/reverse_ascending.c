#include<stdio.h>
int main()
{
	int a[5]={0,2,3,1,4};
	int i,j,temp;
	
	for(i=0;i<5;i++)
{
	printf(" %d",a[i]);
}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]<a[j+1])
			{
				 temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\n");
for(i=0;i<5;i++)
{
	printf("%d ",a[i]);
}
}
