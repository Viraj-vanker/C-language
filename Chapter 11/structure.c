#include<stdio.h>
struct stu
{
	int id;
	char name[50];
	int marks[5];
};
int main()
{
	struct stu s1;
	int i,total = 0;
	float avg;
	printf("Enter the id ");
	scanf("%d",&s1.id);
	
	printf("Enter the name ");
	scanf("%s",&s1.name);
	
	for(i=0;i<5;i++)
	{
		printf("Enter the marks ");
		scanf("%d",&s1.marks[i]);
		total = total + s1.marks[i];
	}
	avg = total/5;
	printf("The id is %d \n",s1.id);
	printf("The name is %s\n",s1.name);
	printf("The average is %f\n",avg);
}
