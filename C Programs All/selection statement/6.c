 // largest among three nubers
#include<stdio.h>
int main(){
     int a,b,c;
     printf("---------Enter the three values----------\n");
     scanf("%d%d%d",&a,&b,&c);
     printf("Values A=%d B=%d C=%d\n",a,b,c);
     if(a>b && a>c){
         printf("A is grater");
     }
     else if(b>a && b>c){
         printf("B is Greater");
     }
     else if(c>a && c>b){
         printf("C is Greater");
     }
     else {
        printf("All are Equal");
     }
     return 0;
}
