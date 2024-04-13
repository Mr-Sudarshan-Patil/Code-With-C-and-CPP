#include<stdio.h>
#include<string.h>
struct employee
{
    int roll;
    char name[10];
    float sallary;
};

int main(){
    
    struct employee e1;
    e1.roll=1;
    e1.name="Sagar";
    e1.sallary=25000;

    printf("Done");


    return 0;
}