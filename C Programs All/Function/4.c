  // //number is amstrong or not
  //   #include<stdio.h>  
  //   #include<math.h>
  //    int main()    
  //   {    
  //   int n,r,sum=0,temp,j;    
  //   printf("enter the number=");    
  //   scanf("%d",&n);    
  //   temp=n;    
  //   while(n>0)    
  //   {    
  //   r=n%10;    
  //   j=pow(r,3); 
  //   sum=sum+j;   
  //   n=n/10;    
  //   }    
  //   if(temp==sum)    
  //   printf("armstrong  number ");    
  //   else    
  //   printf("not armstrong number");    
  //   return 0;  
  //   }   


    

#include<stdio.h>
int main(){
  int n,count=0;
  printf("Enter the no :");
  scanf("%d",&n);
  printf("Your no is :%d\n\n",n );

  while(n!=0){

    n=n/10;
    count++;
  }
  printf("Your digit is :%d ",count);


  return 0;
}