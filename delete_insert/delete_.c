#include<stdio.h>
void del_element(int arr[],int n,int key){
    int ind;
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            ind=i;
            break;

        }
    }
    for(int i=ind;i<n;i++){
        arr[i]=arr[i+1];
    }
}
void main(){
    int key,n;
    printf("enter the n:");
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter the key:");
    scanf("%d",&key);
    printf("the array after the deletion:");
    del_element(arr,n,key);
    for(int i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
        

    }
    return 0;
}