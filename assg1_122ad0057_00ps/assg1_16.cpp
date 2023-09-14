#include<iostream>
#include<math.h>
using namespace std;
class interest{
    public:
    int p;
    int t;
    int r;
};
int main(){
    interest obj;
    cout<<"enter the principal amount:";
    cin>>obj.p;
    cout<<"enter the  time:";
    cin>>obj.t;
    cout<<"enter the rate of interest:";
    cin>>obj.r;
    double a=obj.p*(pow((1+(obj.r/100)),obj.t));
    cout<<"the compound interest:"<<a;
    return 0;
}
