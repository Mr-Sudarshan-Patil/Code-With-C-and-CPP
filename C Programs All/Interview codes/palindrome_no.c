#include<stdio.h>
int main()
{
    // int num, sum=0,r;
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    int count=0;
    // int temp=num;
    while(num!=0)
    {   
        // r=num%10;
        // sum=sum+(r*r*r);
        num=num/10;
        count =count+1;
    }
    printf("you enter the no of digit is %d",count);
    //  printf("First no: %d\n",temp);
    //  printf("Second no : %d",sum);
    //  if(temp==sum){
    //      printf("Amstrong");
    //  }
    //  else{
    //      printf("not amstrong");
    //  }
    return 0;
}