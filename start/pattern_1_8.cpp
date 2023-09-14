#include<iostream>
using namespace std;
int main(){
    int rows,col,i,j;
    cout<<"enter the number of rows and columns:";
    cin>>rows>>col;
    for(i=0;i<rows;i++){ 
        for(j=0;j<col;j++){
            if( i==0 || j==0 || i==rows-1 || j==col-1){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
    }
    return 0;

}