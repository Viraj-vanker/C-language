#include<stdio.h>
int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);				//the function is calling itself
	}
}
int main()
{
	int s,n;
	printf("Enter number you want the factorial of ");
	scanf("%d",&n);
	
	s=fact(n);
	
	printf("The factorial is %d",s);
}
