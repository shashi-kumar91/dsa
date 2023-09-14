#include<iostream>
using namespace std;
void binary_search()
{
    int arr[100],min,n;
    cout<<"enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<< ":";
        cin>>arr[i];
        }
    min=arr[0];
    //sorting 
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            arr[i-1]=arr[i];
            min=arr[i];
            }
         }
    int j=0;
    cout<<"the sorted elements:";
    for(j=0;j<10;j++){
        cout<<arr[j]<<endl;

    }
     //binary search

    int x;
    cout<<"enter the target element:";
    cin>>x;
    int i=0;
    int v;
    int high=n-1;
    while(i<=high){
        v=(i+(high))/2;
        if(arr[v]==x){
        
            //cout<<arr[v];
            cout<<"the index at which your desired element present is "<<v;

        }
        if(arr[i]>x){
            i=v+1;
        }
        if(arr[i]<x){
            i=v-1;
        }
        i++;
        
   }            
}
int main(){
    binary_search();
    return 0;
    }