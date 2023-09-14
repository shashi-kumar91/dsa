#include<iostream>
using namespace std;
class swaping{
    public:
    int a;
    int b;
    

};
int main(){
    swaping Obj;
    cout<<"enter number1:";
    cin>>Obj.a;
    cout<<"enter number2:";
    cin>>Obj.b;
     cout<<"before swapping:"<<Obj.a<<" "<<Obj.b;
    int temp;
    temp=Obj.a;
    Obj.a=Obj.b;
    Obj.b=temp;
   
    cout<<'\n'<<"after swappinfg of numbers:"<<Obj.a<<" "<<Obj.b;
    return 0;
}