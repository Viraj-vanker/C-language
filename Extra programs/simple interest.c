#include<stdio.h>
int main()
{
	int p,n,r,si;
	
	printf("Enter the value of p ");
	scanf("%d",&p);
	
	printf("Enter the value of r ");
	scanf("%d",&r);
	
	printf("Enter the value of n ");
	scanf("%d",&n);
	
	si=(p*r*n)/100;
	
	printf("The simple interest is %d ",si);
}
