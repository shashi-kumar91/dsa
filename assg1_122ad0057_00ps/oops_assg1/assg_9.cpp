#include<iostream>
using namespace std;
class angle{
    public:
    int angle1;
    int angle2;
};
int main(){
    angle Obj;
    cout<<"enter the first angle:";
    cin>>Obj.angle1;
    cout<<'\n'<<"enter the second angle:";
    cin>>Obj.angle2;
    int third=Obj.angle1+Obj.angle2;
    cout<<"third angle of a triangle:"<<180-third;
    return 0;



}