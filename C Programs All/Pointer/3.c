#include<stdio.h>
int main()
{
int a=100;
int *ptr1, *ptr2;

ptr1=&a;
ptr2=&a;

printf("ptr1 before increment :");
printf("%p\n",ptr1);

ptr1=ptr1+2;

printf("ptr1 after increment:");
printf("%p\n\n",ptr1+2);
return 0;
}

