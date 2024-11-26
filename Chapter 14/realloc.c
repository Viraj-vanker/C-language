#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,m;
	printf("Enter the array limit ");
	scanf("%d",&n);
	
	p=(int*)malloc(n*sizeof(int));
	
	printf("Enter extra memory ");
	scanf("%d",&m);
	
	p=(int*)realloc(p,m);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements ");
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		printf("The array are %d\n",*(p+i));
	}
}
