#include<stdio.h>
    int display(int num);
    int main(){

    int p,num;

       p=display(num);
        printf("The factorial is = %d",p);
        
        return 0;
    }
    int display(int num)
    {
    int i,b=1;

    printf("Enter the num = ");
    scanf("%d",&num);

    for(i=num;i>=1;i--){

        b=b*i;
        
    }
    return b;
    return 0;
    }
