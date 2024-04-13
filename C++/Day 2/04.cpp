#include<iostream>
using namespace std;
class sphere
{
    public:
    int r;
    float soa; // SOA : Surface of Area
    
    float voa; // Volume of area
void surface()
{
    soa=4*3.14*r*r;
    cout<<"_______________________________"<<endl;
    cout<<"Surface of Area : "<<soa<<endl;
    cout<<"_______________________________"<<endl;
}
void volume(){
    voa=(4/3)*3.14*r*r*r;
    cout<<"_______________________________"<<endl;
    cout<<"Volume of Sphere : "<<voa<<endl;
    cout<<"_______________________________"<<endl;
}

};
int main()
{
    sphere a;
    cout<<"Enter your Radious :";
    cin>>a.r;

    a.surface();
    a.volume();
    

    return 0;
}