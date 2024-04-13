#include<stdio.h>
int main(){
int i,num;
int a[num];
printf("Entert the Array Size : ");
scanf("%d",&num);

printf("Enter the Elements = ");
for(i=0;i<num;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<num;i++)
{
    printf("%d",a[i]);

    if(a[i+1]-a[i]==1)
    {

        printf("\n\nMissing Element : %d",(a[i]+1));
    }
}


    return 0;
}