//WAP to check whether a number is even or odd

#include<stdio.h>
int main()
{
       int num;
       printf("--------------Enter the No----------------\n\n You Print This No = ");
       scanf("%d",&num);
     if(num%2==0)
     {
        printf("\n%d is a Even No ",num);

      }
      else
     {
        printf("\n%d is a Odd No",num);
     }
     return 0;
 }
