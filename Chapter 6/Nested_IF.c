#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the number ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{	
		if(a>c)
		{
			printf("Number one is greater ");	
		}
		else
		{
			printf("Number three is greater ");
		}
	}	
	else
	{
		if(b>c)
		{
			printf("Number two is greater ");
		}
		else
		{
			printf("Number three is greater ");
		}
	}
}
