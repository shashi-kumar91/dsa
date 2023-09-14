#include<iostream>
using namespace std;
class name{
    public:
    string first_name;
    string sur_name;
};
int main(){
    name obj;
    cout<<"first name:";
    cin>>obj.first_name;
    cout<<"enter the surname:";
    cin>>obj.sur_name;
    cout<<obj.sur_name<<" "<<obj.first_name;
    return 0;
}