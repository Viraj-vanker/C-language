#include<stdio.h>
int main()
{
	int l,b;
	
	printf("Enter the value of length ");
	scanf("%d",&l);
	
	printf("Enter the value of breath ");
	scanf("%d",&b);
	
	printf("Area of square %d\n",l*l);
	printf("perimeter of square %d\n",4*l);
	printf("Area of rectangle %d\n",l*b);
	printf("perimeter of rectangle %d\n",2*(l+b));
}
