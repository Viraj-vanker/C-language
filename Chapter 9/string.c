#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="hello";
	char b[10]="hi";
	
	printf("%s\n",strupr(a));
	printf("%s\n",strlwr(a));
	printf("%s\n",strrev(a));
	printf("%s\n",strcpy(a,b));
	//printf("%s\n",strlen(a));
	
	if(strcmp(a,b)==1)
	{
		printf("string are same ");
	}
	else
	{
		printf("string are not same ");
	}
}
