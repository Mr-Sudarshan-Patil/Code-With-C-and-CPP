#include<stdio.h>
struct employee
{
	int empid;
	char name[10];
	float salary;
};
int main()
{
	struct employee emp[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter employee id:");
		scanf("%d",&emp[i].empid);
		printf("Enter employee name:");
		scanf("%s",&emp[i].name);
		printf("Enter employee salary:");
		scanf("%f",&emp[i].salary);
	}
	printf("Displaying information\n");
	for(j=0;j<5;j++)
	{
		printf("Employee id:%d\n Employee name:%s\n Employee salary:%.2f\n",emp[j].empid,emp[j].name,emp[j].salary);
	}
	return 0;
}
