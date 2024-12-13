#include<stdio.h>
int main()
{
	FILE *p;
	char name[50]="Hello";
	p=fopen("v1.txt","a");
	fprintf(p,"\n How are you ");
	fprintf(p,name);
	fclose(p);
}
