#include<stdio.h>
int main(){
    

     //find out perimeter of the squre and 


    int Sum,side,l,b,por;
    printf("\n\nenter the Squre side= ");
    scanf("%d",&side);
    Sum=side*4;
    printf("\n\nPetimeter of Squre= %d",Sum);
    printf("\n\nenter the value of len and bredth");
    scanf("%d%d",&l,&b);
    por=2*(l+b);
    printf("\n\nperimeter of Rectangle=%d",por);
    
    return 0;
}