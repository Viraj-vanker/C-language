#include<stdio.h>
int main()
{
	 printf("1. tea        --> $10\n");
	 printf("2. cofee      --> $20\n");
	 printf("3. cold cofee --> $30\n");
	 int c,qty,t;
	 char a;
	 here:
	 printf("\nWhat would you like to order write in number ");
	 scanf("%d",&c);
	 switch(c) 
	{
		case 1:
			printf("\nhow much you want ");
			scanf("%d",&qty);
			qty*=10;
			printf("\n %d",qty);
			break;
		case 2:
			printf("\nhow much you want ");
			scanf("%d",&qty);
			qty*=20;
			printf("\n %d",qty);
			break;
		case 3:
			printf("\nhow much you want ");
			scanf("%d",&qty);
			qty*=30;
			printf("\n %d",qty);
			break;
		case 4:
			printf("item not in list ");
			goto here;
	}
	now:
	printf("\n do you want to buy something else ? ");
	scanf("%c",&a);
	a = getchar();
	t = t+qty;
	if (a=='y' || a == 'Y')
	{
		goto here;   
	}
	else if (a=='n' || a == 'N')
	{
		printf("\n total = %d",t);
		printf("\nthank you for buying ");
	}
	else 
	{
		printf("Invalid choice ");
		goto now;
	}
}
