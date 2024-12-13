#include<stdio.h>
struct stu
{
	long int rno,fees;
	char name[30];
	char course[20];
};
int main()
{
	struct stu s1;
	
	FILE *FP;
	FP=fopen("d1.txt","w");
	printf("Enter your roll number ");
	scanf("%ld",&s1.rno);
	printf("Enter your name ");
	scanf("%s",&s1.name);
	getchar();
	
	printf("Enter your course ");
	scanf("%s",&s1.course);
	printf("Enter your fees ");
	scanf("%d",&s1.fees);
	fwrite(&s1,sizeof(s1),1,FP);
	fclose(FP);
	
	FILE *p;
	struct stu s;
	p=fopen("d1.txt","r");
	if(p==NULL)
	{
		printf("File doesn't exist ");
	}
	else
	{
		while(fread(&s,sizeof(s),1,p))
		{
			printf("roll no is %ld \n",s.rno);
			printf("Name is %s \n",s.name);
			printf("Fees is %ld \n",s.fees);
			printf("course is %s \n",s.course);
		}
		fclose(p);
	}
}
