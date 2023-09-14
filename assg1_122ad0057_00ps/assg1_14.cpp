#include<iostream>
using namespace  std;
class mul{
    public:
    int num;
};
int main(){
    mul obj;
    cout<<"enter the number:";
    cin>>obj.num;
    for(int i=1;i<=10;i++){
        cout<<obj.num<<"*"<<i<<"="<<obj.num*i;
        cout<<'\n';
    }
    return 0;
}
