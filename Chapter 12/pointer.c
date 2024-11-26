#include<stdio.h>
int main()
{
	int a[100];
	int *p,i,n;
	
	printf("Enter the limit ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the array ");
		scanf("%d",&a[i]);
	}
	p=&a;
	for(i=0;i<n;i++)
	{
		printf("The array is a[%d]=%d\n",i,*(p+i));
	}
	p=p+4;
	
	*p=20;					//changing the value of 4th array			
	
	printf("The value of a[4]=%d",*(p));
}
