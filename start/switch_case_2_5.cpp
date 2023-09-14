#include<iostream>
using namespace std;
int main(){
    char demo;
    cout<<"enter the alphabet:";
    cin>>demo;
    switch(demo){
        case 'a':
        cout<<"a is vowel";
        break;
        case 'e':
        cout<<"e is vowel";
        break;
        case 'i':
        cout<<"i is vowel";
        break;
        case 'o':
        cout<<"o is vowel";
        break;
        case 'u':
        cout<<"u is vowel";
        break;
        default:
        cout<<demo<<"\t is consonant";
        break;
    }
}