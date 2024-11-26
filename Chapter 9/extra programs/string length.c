#include<stdio.h>
int main()
{
	int i,count=0;
	char a[100];
	
	printf("Enter the string ");
	gets(a);                               	//gets is used like scanf for string
	
	for(i=0;a[i]!='\0';i++)				   	//(\0)=NULL
	{
		count++;
		}	
		printf("The length is %d",count);
}
