#include<stdio.h>
int main(){
    

    //WAP which calculate speed of the time and distance 


    int Speed,time ,distance;
    printf("enter the value of time and distance");
    scanf("%d%d",&distance,&time);
    Speed=(distance/time);
    printf("the Speed value is = %d",Speed);
 
    return 0;
}