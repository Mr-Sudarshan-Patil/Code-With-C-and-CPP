#include<stdio.h>
float volume(float r, float h)
{
 return(22*r*r*h)/7;
}
 
 int main()
 {
   float v,r,h;
   printf("enter radius of cylinder :");
   scanf("%f",&r);
   printf("height of the cylinder :");
   scanf("%f",&h);
    v=volume(r,h);
   printf("volume of cylinder:%f\n",v);
   return 0;
   }  
