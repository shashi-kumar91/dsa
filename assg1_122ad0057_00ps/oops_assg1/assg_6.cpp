#include<iostream>
using namespace std;
class sphere{
    public:
    float radius;

};
int main(){
    sphere Obj;

    cout<<"enter rthe radius of a sphere:";
    cin>>Obj.radius;
    float a=4.0/3.0;

    float vol=a*(3.14*(Obj.radius*Obj.radius*Obj.radius));
    
    
    cout<<'\n'<<"the volume of a sphere:"<<vol;

}