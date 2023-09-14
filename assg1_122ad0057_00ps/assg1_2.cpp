#include<iostream>
#include<limits.h>
using namespace std;

class lmt{
    public:
    void lt(){
        cout<<"max limit:"<<INT_MAX<<'\n';
         cout<<"min limit:"<<INT_MIN<<'\n';
    }

};
int main(){
    lmt Obj; 
    Obj.lt();
    return 0;
}
    

