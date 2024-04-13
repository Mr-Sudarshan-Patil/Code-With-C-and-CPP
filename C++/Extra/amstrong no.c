#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum=0,r,j;

    printf("Enter the no : ");
    scanf("%d\n\n",&n);
    printf("Your no is : %d",n);

    while(n!=0){
        n=n/10;
        count++;
    }

    while(n>0){

        r=n%10;
        j=pow(r,count);
        sum=sum+j;
        n=n/10;
    }
    if(sum==n){
        printf("Ammstrong no");
    }
    else{
        printf("Not a amstrong no");
    }
    return 0;
}