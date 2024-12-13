#include<stdio.h>
int main()
{
	FILE *p;
	char name[50]="Hello";
	p=fopen("v1.txt","w");
	fprintf(p,"hello we are learning file handling ");
	fprintf(p,name);
	fclose(p);
}
