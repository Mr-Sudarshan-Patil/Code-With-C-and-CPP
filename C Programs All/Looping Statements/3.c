#include<stdio.h>
int main()
{
   int i,j,k,n;
  
printf("Enter number");

scanf("%d",&n);

for(i=1;i<=n;i++)
{
 for(j=1;j<n-i;j++)
 {
 printf(" ");
 }
 
 for(k=0;k<(i*2)-1;k++)
 {
 printf("*");
 }
 printf("\n");
}
   return(0);
}
   
