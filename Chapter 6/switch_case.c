#include<stdio.h>
int main()
{
	char ch;
	int a,b,c;
	
	printf("Enter two number ");
	scanf("%d %d",&a,&b);
	getchar();
	
	printf("+ --> addition , -  --> substraction , * --> multiplication , / --> division ");
	scanf("%c",&ch);
	switch(ch)
	{
			case '+':
				c=a+b;
				printf("The addition is %d",c);
				break;
			case '-':
				c=a-b;
				printf("The substraction is %d",c);
				break;
			case '*':
				c=a*b;
				printf("The multiplication is %d",c);
				break;
			case '/':
				c=a/b;
				printf("The division is %d",c);
				break;
			default:
				printf("Invalid symbol");
	}
}
