#include<stdio.h>
int main(){
     int number1;
    
   
     printf("\n 1 Squre or cube  \n or \n 2 Leap \n Enter your choise no = ");
     scanf("%d",&number1);

    switch(number1){
         case 1:
         {   
             int num1,Squre,Cube;
            printf("\nEnter any no= ");
            scanf("%d",&num1);
             Squre=num1*num1;
             Cube=num1*num1*num1; 
             printf("\nSqure root = %d",Squre);
             printf("\n\nCube root = %d",Cube);  
         }
             break;


         case 2:
        {
                 int num;
             printf("\nEnter the year= ");
             scanf("%d",&num);
             if(num%4==0)
             {
                 printf("\n------------Leap Year-------------");
             }

             else 
             {
                printf("\n------------Not Leap Year------------");
             }
         }    
             break;

             default:
             printf("your choise no is not exist plss try again 1 or 2 ");
             break;
     }
     return 0;
     }
