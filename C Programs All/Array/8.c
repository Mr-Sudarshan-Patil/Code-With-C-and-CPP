#include<stdio.h>   
int main()  
{  
  
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];  
    printf("Enter the number of rows and columns of matrix\n");  
    scanf("%d%d", & m, & n);  
    printf("Enter the elements of first matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & first[c][d]);  
    printf("Enter the elements of second matrix\n");  
    for (c = 0; c < m; c++)  
        for (d = 0; d < n; d++) scanf("%d", & second[c][d]);  
    printf("Sum of entered matrices:-\n");  
    for (c = 0; c < m; c++)  
    {  
        for (d = 0; d < n; d++)  
        {  
            sum[c][d] = first[c][d] + second[c][d];  
            printf("%d\t", sum[c][d]);  
        }  
        printf("\n");  
    }  




    // multiplication of two matrix


//     int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
// system("cls");  
// printf("enter the number of row=");    
// scanf("%d",&r);    
// printf("enter the number of column=");    
// scanf("%d",&c);    
// printf("enter the first matrix element=\n");    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// scanf("%d",&a[i][j]);    
// }    
// }    
// printf("enter the second matrix element=\n");    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// scanf("%d",&b[i][j]);    
// }    
// }    
    
// printf("multiply of the matrix=\n");    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// mul[i][j]=0;    
// for(k=0;k<c;k++)    
// {    
// mul[i][j]+=a[i][k]*b[k][j];    
// }    
// }    
// }    
// //for printing result    
// for(i=0;i<r;i++)    
// {    
// for(j=0;j<c;j++)    
// {    
// printf("%d\t",mul[i][j]);    
// }    
// printf("\n");    
// }    
    return 0;  
}  