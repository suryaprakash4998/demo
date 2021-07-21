void display_array(int R,int C,int a[][3]);
void display_ptr(int R,int C,int *p);
int a[2][3]={{1,2,3},{4,5,6}};
main()
{
	int *p=a;
	printf("%d\n ",*((int*)4206624));
	int size=sizeof(a)/sizeof(int);
	display_array(2,3,a);
	display_ptr(2,3,a);
}
void display_array(int R,int C,int a[][3])
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",a[i][j]);
			
		} printf("\n");
	}
}


void display_ptr(int R,int C,int *p)
{
	int i,j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d ",p+(i*1);
		}printf("\n");
	}
}

