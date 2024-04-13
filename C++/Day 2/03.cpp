#include<iostream>
using namespace std;
class ElectricityBill
{   
    public:
    string name;
    int unit;
    float ch;
    

        void display()
        {   
        cout<<endl<<"User Name: "<<name<<endl;
        cout<<"Consumer Unit : "<<unit<<endl;
        // cout<<"Your Charges is : "<<ch<<endl;
        }
        float getdata(float chr)
        {
            ch=chr;
            cout<<"Your Charges is : "<<ch<<endl;
        }
        int getinfo()
        {
            int unit;
        }

    
};
int main()
{
    
    ElectricityBill obj;  
        int i=0;
        cout<<i+1<<")"<<"User name :";
        cin>>obj.name;
        cout<<endl<<"Number of Unit : ";
        cin>>obj.unit;
        
        if(obj.unit>+0 && obj.unit<+30)
        {   float chr;
            chr=obj.getinfo()*1.5;
            obj.getdata(chr);
            
        }
        if(obj.unit>30 && obj.unit<200)
        {
            float chr;
            chr=obj.getinfo()*3.00;
            obj.getdata(chr);
        }
        if(obj.unit>200 && obj.unit<300)
        {
            float chr;
            chr=obj.getinfo()*4.25;
            obj.getdata(chr);
        }
    

    cout<<"---------------------------------------------------"<<endl;
    for(int i=0;i<2;i++)
    {
        obj.display();
    }
    cout<<"___________________________________________________";


    
    return 0;
}