#include<stdio.h>
int main(){
    int f1=0,f2=1,f3=f1+f2;
    int i=1,num;

    printf("Enter the no = ");
    scanf("%d",&num);
    printf("%d %d ",f1,f2);

    while(i<num){ 

    printf("%d ",f3);
    i++;
    f1=f2;
    f2=f3;
    f3=f1+f2;
    }
    
    return 0;
}
