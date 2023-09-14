//inserion of an element in unsorted array
#include<stdio.h>
int insert(int arr[],int element,int n){
    
    arr[n]=element;
    return n;

}
int main(){
    int arr[10]={1,2,3,4,5,6};
    int element=7;
    int n=6;
    insert(arr,element,n);
    printf("the array after insertion :");
    for(int i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }

}