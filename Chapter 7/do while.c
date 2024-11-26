#include<stdio.h>
int main()
{
	int a,b,x,y,t,gcd,lcm;
	
	printf("Enter two number ");
	scanf("%d %d",&x,&y);
	
	a=x;
	b=y;
	
	do
	{
		t=b;
		b=a%b;
		a=t;
	}
	while (b!=0);
	gcd=a;
	lcm=(x*y)/gcd;
	
	printf("the lcm is %d\n",lcm);
	printf("the gcd is %d\n",gcd);
}
