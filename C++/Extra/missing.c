#include<stdio.h>
int main(){
int i,j,n,temp=0;
int a[20];

printf("Entert the Array Size : ");
scanf("%d",&n);

printf("Enter the Elements = ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

printf("Missing Elements are : ");
for(i=0;i<n-1;i++)
{
  
        if(a[i+1]-a[i]>=1)
        {

            temp=a[i+1]-a[i];
        
            for(j=1;j<=temp-1;j++)
            {
                printf("%d\n",a[i]+j);
            }

        }
    
}



    return 0;
}