#include<stdio.h>
#include<math.h>
void display();
int main(){

    int num,count=0,sum=0,r,temp;
    printf("Enter the no : ");
    scanf("%d",&num);

    temp=num;
    int n=num;
    // printf("N : %d",temp);
    while(num!=0){
        num=num/10;
        count++;
    }

    //here n is zero so i use tu temp variable and store the n value
    printf("Digits (count): %d\n\n",count);
    printf("N : %d\n",n);
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
    }
    
 num=temp;
    printf("R : %d\n\n",r);
    printf("N: %d\n\n",num);
    printf("sum : %d\n\n",sum);

    if(sum==num)
    {
        printf("\nAmmstrong no");
    }
    else{
        printf("\nNot a amstrong no");
    }
    return 0;
}
