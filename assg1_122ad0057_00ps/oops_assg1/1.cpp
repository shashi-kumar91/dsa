#include<iostream>
using namespace std;
class myClass{
    public:
    int roll;
    string name;
    string department;

};
int main(){
    myClass myObj;
    cout<<"enter the rollno:"<<"\n";
    cin>>myObj.roll;
    cout<<"enter your name:"<<"\n";
    cin>>myObj.name;
    cout<<"enter your department:";
    cin>>myObj.department;
    return 0;

}
