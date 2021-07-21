#include<stdio.h>
int main()
{
	int a[5],sum=0,i=0,m;
	printf("Enter the element \n");
	 for(i=0;i<5;i++)
    {
    	scanf("%d",&a[i]);///10,11,12,13,17,19
	}
	for(i=0;i<5;i++)
    {
    	sum=sum+a[i]; //a[0]=10 sum=10, a[1]=11 sum=21.......
	}
	printf("%d",sum);

}
