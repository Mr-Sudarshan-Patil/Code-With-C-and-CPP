#include<stdio.h>
int main()
{
   int i,j, rows;
  
printf("Enter number of rows");

scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
 for(j=1;j<=i;j++)
  printf("%d",i);
  
 printf("\n");
}
}




/* #include<stdio.h>
int main()
{
    int n;
   int i,j,k;
  
printf("Enter the number");

scanf("%d",&n);
for(i=1;i<=n;i++)
{
 for(j=1;j<=i;j++)
  printf("%c",i+64);
}  
 printf("\n");
}
*/
