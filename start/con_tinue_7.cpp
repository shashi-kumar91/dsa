//print all the values between 1 and 50 except multiples of 3
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        else{
            cout<<i<<"\n";
        }

    }
    

} 