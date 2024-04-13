// Grade Programm
#include<stdio.h>
int main()
{

     int num;

     printf("\nCheck you grade by percentage");

     printf("\nPlease Enter you percentage =");

     scanf("%d",&num);

     if(num>=70)
     {
         printf("\n---------Your Grade is A---------");
     }
     else if(num>=60 && num<=70){
         printf("\n---------Your Grade is B+---------");
        
     }
     else if(num>=45 && num<=60){
         printf("\n---------Your Grade is B---------");
        
     }
     else if( num>=35 && num<=45){
         printf("\n---------Your Grade is C---------");
        
     }
     else {
         printf("\n----------Your are fail----------");
        
     }
     return 0;
     }

