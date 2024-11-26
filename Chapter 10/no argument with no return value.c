#include<stdio.h>
void add()
{
	int a,b,c;
	printf("Enter two numbers ");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	
	printf("The addition is %d",c);
}
int main()
{
	add();
}
