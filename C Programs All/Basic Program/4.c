#include<stdio.h>
int main(){
    

    // WAP to convert Fahrenheit temp in degree Celsius


    float F,C;
    printf("enter the value of celsius =");
    scanf("\n%f",&C);
    F=1.8*C+32;
    printf("the value of fahrenheit = %f",F);
  
    return 0;
}