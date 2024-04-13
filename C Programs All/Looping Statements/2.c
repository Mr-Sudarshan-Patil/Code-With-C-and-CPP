#include<stdio.h>
int main()
{
   int i, n, even;
 printf("enter a number");
 scanf("%d", &n);
   for(i=1;i<=n;i++)
  {
   if(i%2==0)
   {
   even=even+i;
   
   printf("sum of even number is %d",even);
   }
   }
   return(0);
}
   
