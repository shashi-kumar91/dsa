#include<iostream>
using namespace std;
int main(){
    int d,e,decimal,binary,i=0,arr[5];
    cout<<"enter the decimal number:";
    cin>>decimal;
    int count=0;
    while(decimal>0){
        arr[count]=decimal%2;
        //arr[i]=d;
        decimal=decimal/2;
        
        
        count=count+1;
       
    


    }
    
    //cout<<arr;
    //cout<<count;
    cout<<arr[0];
    cout<<arr[1];
    
    cout<<"binary form of the decimal is:";
    i=count;
    for(i=count-1;count>=0;count--){
        cout<<arr[i];
    }
    return 0;
    

}