// #include<stdio.h>
// #include<math.h>
// int main(){
 

//     int n,count=0,sum=0,r,j;
//     int num=n,temp;
//     printf("Enter the no : ");
//     scanf("%d",&n);
//     printf("Your no is : %d\n\n",n);
//     temp=n;
//     while(num!=0){
//         num=num/10;
//         count++;
//     }
//     while(n>0){

//         r=n%10;
//         j=pow(r,count);
//         sum=sum+j;
//         n=n/10;
//     }
//     printf("the sum is :%d ",sum);
//     n=temp;
//     if(n==sum){
//         printf("\nAmmstrong no");
//     }
//     else{
//         printf("\nNot a amstrong no");
//     }
//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main(){
    

    int n=3;
    int j;

    j=pow(n,3);

    printf("Power of p is : %d",j);

    return 0;
}