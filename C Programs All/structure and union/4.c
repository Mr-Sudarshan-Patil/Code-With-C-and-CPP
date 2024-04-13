#include<stdio.h>
#include<string.h>
 typedef  struct employee
{
int empid;
char name[10];
float salary;
}emp;

int main()
{
emp e1;
printf("enter employee id:");
scanf("%d",&e1.empid);
printf("enter employee name:");
scanf("%s",&e1.name);
printf("enter employee salary:");
scanf("%f",&e1.salary);

printf("employee id:%d \n",e1.empid);
printf("employee name:%s \n",e1.name);
printf("employee salary:%f \n",e1.salary);
return 0;
}
