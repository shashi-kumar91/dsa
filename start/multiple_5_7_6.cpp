#include<iostream>
using namespace std;
int main(){
    int num;
    int i;
    for(i=1;;i++){
        if(i%5==0 && i%7==0){
            cout<<i;
            break;
        }
    }
}