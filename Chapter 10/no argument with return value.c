#include<stdio.h>
int add()
{
	int a,b,c;
	printf("Enter two number ");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	
	return c;
}
int main()
{
	int s;
	s=add();
	printf("The addition is %d",s);
}
