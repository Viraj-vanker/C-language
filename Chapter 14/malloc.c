#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	
	printf("Enter the limit ");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element ");
		scanf("%d",p+i);
	}
	for (i=0;i<n;i++)
	{
		printf("The value is %d\n",*(p+i));
	}
}
