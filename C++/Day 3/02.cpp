#include<iostream>
using namespace std;

class BankAccount
{
    public:
    string Name;
    string AcNo;
    string Acc;
    float amount;

     void gets(float s)
    {
        amount=s;
    }

    BankAccount()
    {   
       
        cout<<"Name : "<<"Sudarshan Patil"<<endl;
        cout<<"Account No : "<<"54245654515"<<endl;
        cout<<"Account Type :"<<"Saving"<<endl;
   


    }
   
    ~BankAccount()
    {
        cout<<"----------------Account Details--------------------"<<endl;
        cout<<"Name of Depositor : "<<Name<<endl;
        cout<<"Balance in your account : "<<amount<<" Rupees"<<endl;

    }
};
int main()
{
    BankAccount obj;
    float s;

    cout<<"Enter the name of Depositor :";
    cin>>obj.Name;

    cout<<"Enter yout Amount : ";
    cin>>s;
    obj.gets(s);
    

    return 0;
}