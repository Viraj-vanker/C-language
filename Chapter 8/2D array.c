#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the array element ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("The array element are a[%d][%d] = %d\n",i,j,a[i][j]);
		}
		printf("\n");
	}
}
