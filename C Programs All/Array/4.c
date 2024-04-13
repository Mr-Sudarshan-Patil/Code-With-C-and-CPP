#include<stdio.h>
int main ()
{
int n,i;
int arr[30],smallest;
printf("enter number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
smallest=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]<smallest)
{
smallest=arr[i];
}
}
printf("smallest element=%d",smallest);
return 0;
}



