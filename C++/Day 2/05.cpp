#include<iostream>
using namespace std;
class TelephoneBill
{
    public:
    string Name;
    string Address;
    string TelNo;
    int Noc; // Number of calls

    void display()
    {
        cout<<endl<<"_________________________________"<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Address : "<<Address<<endl;
        cout<<"Telephone no : "<<TelNo<<endl;
        cout<<"_________________________________"<<endl;

    }
    void Bill()
    {   
        Noc=Noc*2;
        cout<<"______________________________________"<<endl<<endl;
        cout<<"----------Telephone Phone Bill------------"<<endl;
        cout<<"-----------Charges per call is Rs. 2/-----"<<endl;
        cout<<endl<<"Your Telephone Bill is : "<<Noc<<" Rupees";
        cout<<endl<<"____________________________________";

    }
};
int main()
{
    TelephoneBill obj;
    cout<<"Enter the name of Coustomer :";
    cin>>obj.Name;
    cout<<endl<<"Address : ";
    cin>>obj.Address;
    cout<<endl<<"Telephone No : ";
    cin>>obj.TelNo;

    cout<<endl<<endl<<"_________________________________";
    obj.display();

    cout<<endl<<"In This Month Your calling list is :";
    cin>>obj.Noc;

    

    obj.Bill();





    return 0;
}