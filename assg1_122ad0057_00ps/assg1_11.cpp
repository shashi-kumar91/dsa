#include<iostream>
using namespace std;
class scalane{
    public:
    int base;
    int height;

};
int main(){
    scalane Obj;
    cout<<"enter height:";
    cin>>Obj.height;
    cout<<"enter the base of triangle:";
    cin>>Obj.base;
    float area=(1.0/2.0)*(Obj.height)*(Obj.base);
    cout<<"area of scalane triangle:"<<area;
    return 0;
}