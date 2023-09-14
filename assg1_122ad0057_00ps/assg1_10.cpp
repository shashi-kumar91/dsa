#include<iostream>
using namespace std;
class mph{
    public:
    int kmph;
};
int main(){
    mph Obj;
    cout<<"enter the kmph:";
    cin>>Obj.kmph;
    cout<<"miles per hour:"<<0.621371*Obj.kmph;
    return 0;
}