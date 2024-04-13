#include<iostream>
using namespace std;
class student
{
    public:
    char name[20];
    int RollNo;
    string Address;
    float Percentage;


    student()
    {
        cout<<"Name :"<<name;
    }
    ~student()
    {
        cout<<"Destructor";
        cout<<"Name : "<<name;
    }




};
int main()
{
    student a;
    cin>>a.name;
    



    return 0;
}