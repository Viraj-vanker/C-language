#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a+b;
	
	return c;
}
int main()
{
	int s;
	s=add(5,6);
	printf("The addition is %d",s);
}
