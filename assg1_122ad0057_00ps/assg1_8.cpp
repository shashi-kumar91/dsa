#include<iostream>
#include<math.h>
using namespace std;
class triangle{
    public:
    int a;
    int b;
    int c;
};
int main(){
    triangle Obj;
    cout<<"enter side 1 ofa triangle;";
    cin>>Obj.a;

    cout<<'\n'<<"enter side 2 ofa triangle;";
     cin>>Obj.b;
    cout<<'\n'<<"enter side 1 ofa triangle;";
     cin>>Obj.c;
     float s=(Obj.a+Obj.b+Obj.c)/3.0;
     
     float area=sqrt((s*((s-Obj.a)*(s-Obj.b)*(s-Obj.c))));
     cout<<"area of the triangle:"<<area;
    return 0;


}