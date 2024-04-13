#include<stdio.h>
#include<string.h>
#define max 10
struct student
{
int rollno;
char name[10];
int marks;
};

int main()
{
int i,n;
struct student stuarr[max];
printf("enter how many record u want to display");
scanf("%d",&n);


for(i=0;i<n;i++)
{
printf("enter student rollno:");
scanf("%d",&stuarr[i].rollno);
printf("enter student name:");
scanf("%s",&stuarr[i].name);
printf("enter student marks:");
scanf("%d",&stuarr[i].marks);
}

printf("\n \trollno\tName\tmarks\t\n");
for(i=0;i<n;i++)
printf("\t%d \t%s \t%d \n ",stuarr[i].rollno,stuarr[i].name,stuarr[i].marks);
return 0;
}


