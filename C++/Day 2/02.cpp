#include<iostream>
using namespace std;

class Team
{
public:
string Country;
string Player;
int Matches;
int Age;
float BattingAvg;
float BallingAvg;


void display()
{
    
    cout<<Country<<"\t \t"<<Player<<"\t"<<Matches<<"\t"<<Age<<"\t"<<BattingAvg<<"\t"<<BallingAvg<<endl;
}
};
int main()
{
    Team obj[1];
    
    for(int i=0;i<1;i++)
    {
        cout<<"Country_name : ";
        cin>>obj[i].Country;
        cout<<"Player_Name : ";
        cin>>obj[i].Player;
        cout<<"Matches : ";
        cin>>obj[i].Matches;
        cout<<"Age : ";
        cin>>obj[i].Age;
        cout<<"BattingAvg : ";
        cin>>obj[i].BattingAvg;
        cout<<"BallingAvg : ";
        cin>>obj[i].BallingAvg;
    }
    cout<<"Country_Name  "<<"Player_Name  "<<"Matches  "<<"Age  "<<"BattingAvg  "<<"BallingAvg  "<<endl;
    for(int i=0;i<3;i++){
        obj[i].display();
    }
    return 0;
}