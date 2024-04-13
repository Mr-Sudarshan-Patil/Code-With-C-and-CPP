#include<stdio.h>
#include<string.h>
union A
{
int a;
char b[10];
float c;
}var;

int main()
{
//union A var;
//var.a=65;
printf("%d",sizeof(var));
//printf("%d",sizeof(char));
//printf("%d",sizeof(float));

return 0; 



}
