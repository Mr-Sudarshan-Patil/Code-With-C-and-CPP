#include<stdio.h>
int main(){    
    // Simple intrest Program:


    int P,R,T;      //p is ptinciple r is rate of interest and t is time period
    float SI;
    printf("enter the value of princile= or rate= or time=");
    scanf("%d%d%d",&P,&R,&T);
    SI=P*R*T/100;
    printf("the simple intrest is %f",SI);
   
    return 0;
}