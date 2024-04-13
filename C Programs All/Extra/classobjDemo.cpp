#include<iostream>
using namespace std;

class student{
    // public:
string name;
public:
int a;

void setname(string s){
    name=s;
}
void display(){

    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<a<<endl;
}

};
int main()
{

    student a;
    string s;
    
    a.setname("Sudarshan");
    a.a=21;


    a.display();

    return 0;
}