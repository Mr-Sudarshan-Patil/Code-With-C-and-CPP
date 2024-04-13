#include<stdio.h>
int main()
{
   char s[100];
   printf("Enter the String : ");
   gets(s);
    int count=0;
   while (s[count]!='\0')
   {
       count++;
   }
  
   int temp;
   for(int i=0;i<(count/2-1);i++){
       temp=s[i];
       s[i]=s[(count-1)-i];
       s[(count-1)-i]=temp;
   }
   printf("%s",s);

}