#include<stdio.h>
int main()
{
  double a=2;
  int b=3;
  char ch='c';
  double *ptr1=&a;
  int *ptr2=&b;
  char *ptr3=&ch;
  
  printf("%1f\n",a);
  printf("%p\n",ptr1);
  printf("%d\n",ptr1);
  
  
  printf("%d\n",b);
  printf("%p\n",ptr2);
  printf("%d\n",ptr2);
 
  
  printf("%c\n",'c');
  printf("%p\n",ptr3);
  printf("%d\n",ptr3);
  
    
}
  
  
  
