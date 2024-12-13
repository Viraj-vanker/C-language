#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	char s[50];
	p=fopen("v1.txt","r");
	
	if(p==NULL)
	{
		printf("file doesn't exist ");
		exit(0);
	}
	else
	{
		fget(s,50,p);
		printf("%s",s);
		fprintf(p,"hello");
	}
	fclose(p);
}
