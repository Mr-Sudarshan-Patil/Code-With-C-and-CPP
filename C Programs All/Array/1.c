#include<stdio.h>
int main()
{
 

int num;
float sum=0;
float avg;
int i,j;
        printf("Enter your array size = ");
        scanf("%d",&num);
        int a[num];



        printf("Enter the Elements = ");
        for(i=0;i<=num-1;i++)
        {
            scanf("%d",&a[i]);
        }

        for(j=0;j<=num-1;j++)
        {
            printf("%d ",a[j]);

            sum=sum+a[j];
        }

avg=sum/num;

printf("\n\nYour array total is %f",sum);
printf("\n\nYour  avarage is %.2f",avg);

    return 0;
}