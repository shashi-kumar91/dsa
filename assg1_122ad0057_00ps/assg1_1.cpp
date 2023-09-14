#include<iostream>
using namespace std;
class volume{
    public:
    int side;
    

};
int main(){
    volume Obj;
    cout<<"enter the side of a cube:";
    cin>>Obj.side;
    cout<<"the volume of a cube:"<<Obj.side*Obj.side*Obj.side;
    return 0;
}