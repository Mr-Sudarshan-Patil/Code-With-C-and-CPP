#include<stdio.h>
int main(){
    

    //gretest no of three integers

    
    int a,b,c;
    printf("Enter the first no ");
    scanf("%d",&a);
    printf("Enter the second no ");
    scanf("%d",&b);
    printf("Enter the third no ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else if(c>b && c>a)
    {
        printf("%d is greater",c);
    }
    else{
        printf("all are equal");
    }

    return 0;
}