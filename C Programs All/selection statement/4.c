// number is positive or negative
#include<stdio.h>
int main()
{
    int num;
     printf("enter the no = ");
     scanf("%d",&num);
     if(num>0){
         printf("The no %d is positive",num);
     }
     else if(num<0){
         printf("The no %d is negative",num);

     }
     else
     {
         printf("The no %d is Zero",num);
     }
     return 0;
}
