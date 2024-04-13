#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	float salary;
	struct date
	{
		int dd;
		int mm;
		int yy;
	}doj;
}e1;
int main()
{
	e1.id=101;
	strcpy(e1.name,"Sonoo Jaiswal");
	e1.salary=25000;
	e1.doj.dd=10;
	e1.doj.mm=11;
	e1.doj.yy=14;
	
	//printing employee information
	
	printf("employee id:%d\n",e1.id);
	printf("employee name:%s\n",e1.name);
	printf("employee salary:%.2f\n",e1.salary);
	printf("employee date of joining(dd/mm/yy):%d/%d/%d\n",e1.doj.dd,e1.doj.mm,e1.doj.yy);
	return 0;
}
