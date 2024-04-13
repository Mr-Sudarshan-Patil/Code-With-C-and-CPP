#include<stdio.h>
int main(){
    
    
    // WAP to accept five subject marks and find out total and average of the marks

    int m1,m2,m3,m4,m5,Total,avg;
    printf("\nenter the marks m1=");
    scanf("%d",&m1);
    printf("\nenter the marks m2=");
    scanf("%d",&m2);
    printf("\nenter the marks m3=");
    scanf("%d",&m3);
    printf("\nenter the marks m4=");
    scanf("%d",&m4);
    printf("\nenter the marks m4=");
    scanf("%d",&m5);
    Total=m1+m2+m3+m4+m5;
    printf("\nTotal mark of subject is=%d",Total);
    avg=Total/5;
    printf("\nThe Avg of subject is=%d",avg);
    
    return 0;
}