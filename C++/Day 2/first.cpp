#include<iostream>
using namespace std;
class student
{
    string name;
    public:
// string name;
int age;
bool gender;
void setname(string s){
    name=s;

}
void display(){
    cout<<"name: "<<name<<endl;

}
};



int main()
{
    student arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"Name :";
        cin>>s;
        arr[i].setname(s);
    }
    
    for(int i=0;i<3;i++){
      arr[i].display();
      
    }
   

    

    return 0;
}