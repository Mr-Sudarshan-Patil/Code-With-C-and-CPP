#include<stdio.h>
int main()
{
 int i,j;
 
 for(i=1,j=5;i<=5,j>=1;i++,j--)
 {
 if(i==3)
 {
 continue;
 }
 printf("%d  %d\n",i,j);
 printf("\n");
 }
 
 return 0;
}
