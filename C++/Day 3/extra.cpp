#include<iostream>
using namespace std;
class s
{

public:
int a,b;

s()
{
    cout<<"Constructor.."<<endl;
    a=10;
    b=20;
}
~s(){
    cout<<endl<<"Destructor";
    cout<<endl<<"A : "<<a;
    cout<<endl<<"B : "<<b;
}
};
int main()
{
    s c;

    

    return 0;
}