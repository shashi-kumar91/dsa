#include<iostream>
using namespace std;
class pn{
    public:
    int num;
};
int main(){
    pn obj;
    cout<<"enter the numner:";
    cin>>obj.num;
    if(obj.num>0){
        cout<<"number is positive";

    }
    else if(obj.num==0){
        cout<<"number is zero";
    }
    else{
        cout<<"number is negative";
    }
         
    
    return 0;

}
