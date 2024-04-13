#include<stdio.h>
int main()
{
 float a,b,*p,*q,sum;
 printf(" enter any two numbers :");
 scanf("%f%f",&a,&b);
 p=&a;
 q=&b;
 
 sum =*p + *q;
 printf("sum of two numbers= %f",sum);
 return 0;
 }
 
 
