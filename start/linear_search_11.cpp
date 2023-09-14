#include<iostream>
using namespace std;

int linear(int arr[],int x=33){
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    return -1;

}
int main(){
    int arr[10]={1,3,4,5,2,33,44,88,99,66},y;
    int x=33;
    
    y=linear(arr);
    cout<<"linear search for the element"<<x<<"is"<<y;
    return 0;
    

}

