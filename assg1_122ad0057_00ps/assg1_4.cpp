#include<iostream>
using namespace std;
class add{
    public:
    int a;
    int b;
    

};
int main(){
    add Obj;
    cout<<"enter number1:";
    cin>>Obj.a;
    cout<<"enter number2:";
    cin>>Obj.b;
    cout<<"the addition of two numbers:"<<Obj.a+Obj.b;
    return 0;
}