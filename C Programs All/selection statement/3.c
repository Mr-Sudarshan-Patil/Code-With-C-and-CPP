//wap  to accept cost price from user and ask whether the user is student or not.
 #include<stdio.h>
int main()
{
     char user;
     int cost;
     float discount;

     printf("\n\nYou are a Sudent or not...\nif you are a student type Yes or you are not...\na student you type Not= ");
     scanf(" %c",&user);

     if(user=='y' || user=='Y' )
     {
        
        printf("\nuser is a student");

        printf("\nplease Enter you Cost Price= ");

         scanf("%d",&cost);

         if(cost>=500)
         {
             printf("\nYour Discount is 10 percent \n");
             discount=cost*0.10;
             printf("\nyour Discount Prie is %f",discount);
         }
         else
         {
             printf("\nYour Discount is 5 percent");
             discount=cost*0.05;
            printf("\nyour Discount Prie is %f",discount);

         }
     }
     else if(user=='n' || user=='N')
     {
        printf("\nAre you Not a Student");

         printf("\nplease Enter you Cost Price= ");

         scanf("%d",&cost);
         if(cost>=500)
         {
            
            printf("\nYour Discount IS 8 percent");
             discount=cost*0.08;
             printf("\nyour Discount Price is %f",discount);
         }
         else
         { 
             discount=cost*0.02;
             printf("\nyour Discount Prie is %f",discount);
         }
        
     }
     return 0;
     }
