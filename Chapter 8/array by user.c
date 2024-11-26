#include<stdio.h>
int main()
{
	int a[100],n,i;
	
	printf("Enter the array limit ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("The array element are a[%d] = %d\n",i,a[i]);
	}
}
