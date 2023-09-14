#include<iostream>
using namespace std;
int main(){
    int rows,col,i,j;
    cout<<"enter the number of rows and columns:";
    cin>>rows>>col;
    for(i=0;i<rows;i++){ 
        for(j=rows-i;j>=0;j--){
            
            cout<<"*";
            }
        cout<<endl;
        }
        
    
    return 0;

}