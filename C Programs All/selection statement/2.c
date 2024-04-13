//wap to check whether a person is eligible to voting or not

     #include<stdio.h>
     int main(){
     int age;
     printf("\n\tEnter the age = ");
     scanf("%d",&age);
      if(age>=18)
     {
         printf("\n-----------Are you eligible for a voting------------");
     }
     else 
     {
        printf("\n------------Are you less than 18 your are not eligible for a voting---------");

     }
     return 0;
     }

