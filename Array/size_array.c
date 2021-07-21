#include<stdio.h>
int main()
{
	int array[5]={1,2,3,4,5};
	int size;
	size=sizeof(array)/sizeof(int);
	printf("The size of array is %d",size);
	return 0;
	
}
