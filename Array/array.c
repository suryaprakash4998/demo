#include<stdio.h>
//print array values
int main()
{
	int array[5]={1,2,3,4,5};
	int i,limit;
	limit=sizeof(array)/sizeof(int);
	for(i=0;i<limit;i++)
	{
		pintf("%d",array[i]);
	}
	
}
