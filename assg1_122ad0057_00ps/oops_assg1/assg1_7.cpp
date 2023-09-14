#include<iostream>

using namespace std;
class cylinder{
    public:
    float height;
    float radius;

};
int main(){
     cylinder Obj;

    cout<<"enter the radius of a cylinder:";
    cin>>Obj.radius;
    float a=4.0/3.0;
    cout<<"enter the height of a cylinder:";
    cin>>Obj.height;

    float vol=a*Obj.height*(3.14*(Obj.radius*Obj.radius*Obj.radius));
    
    
    cout<<'\n'<<"the volume of a sphere:"<<vol;
}