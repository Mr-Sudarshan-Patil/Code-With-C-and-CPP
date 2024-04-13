#include<stdio.h>
int main()
{
   int num, i,flag=0;
   printf("enter a number");
   scanf("%d",&num);
   for(i=2;i<num;i++)
   {
   if(num%i==0)
   {
   
   flag=1;
   }
   
   }
   if(num==1)
   {
   printf("number is neither prime nor comp");
   }
  else if(flag==0)
   {
   printf("given number is prime");
   }
   else
   {
   printf("number is not prime");
   }   
   return(0);
}
   
