#include<stdio.h>
int main(){
    char str[100];
    printf("Enter the name :");
    gets(str);
    for(int i=0;i<="\0";i++){

        printf(str[i]);
    }
    


    return 0;
}