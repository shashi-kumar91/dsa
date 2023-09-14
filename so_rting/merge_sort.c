#include<stdio.h>
void sort(int arr[],int low,int mid,int high){
    int i,j,k,b[20];
    i=low;
    j=mid+1;
    k=low;
    while(i<=low && j<=high){
        if(arr[i]>=arr[j]){
            b[k++]=arr[j++];

        }
        else{
            b[k++]=arr[i++];
        }
    }
    
    while(i<=mid){
        b[k++]=arr[i++];
    }
    while(j<=high){
        b[k++]=arr[j++];
    }
    
    for(i=low;i<=high;i++){
        arr[i]=b[i];
    }

}
void mergesort(int arr[],int low,int high)
{
    int mid;
    if(low!=high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        sort(arr,low,mid,high);

    }
}
int main(){
    int n,i,low,high;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    
    mergesort(arr,low,high);
    printf("array after the merge sort:");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}