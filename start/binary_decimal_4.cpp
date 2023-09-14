#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int decimal,rem,binary,i=0,count=0;
    cout<<"enter the binary number";
    cin>>binary;
    while(binary!=0){
        rem=binary%10;
        decimal=rem*pow(2,i);
        binary=binary/10;
        i++;

    }
    cout<<decimal;
    return 0;
}