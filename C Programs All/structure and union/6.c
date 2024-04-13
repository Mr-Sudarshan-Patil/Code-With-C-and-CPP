#include<stdio.h>
#include<string.h>
struct employee
{
int empid;
char name[10];
float salary;
}e;

 void func(struct employee record);
 
 int main()
 {
 printf("enter employee id:");
scanf("%d",&e.empid);
printf("enter employee name:");
scanf("%s",&e.name);
printf("enter employee salary:");
scanf("%f",&e.salary);
func(e);
 return 0;
 }
  void func(struct employee record)
  {
  printf("employee id:%d \n",e.empid);
printf("employee name:%s \n",e.name);
printf("employee salary:%f \n",e.salary);
  
  }

