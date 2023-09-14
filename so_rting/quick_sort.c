#include<stdio.h>
void swap(int arr[],int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=arr[i];

}

int partition(int arr[],int low,int high){
    int i=low-1;
    int pivot=arr[high];

    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);

        }
        
    }
    swap(arr,i+1,high);
    return i+1;


}
void quicksort(int arr[],int low,int high)
{
    
    if(low<=high){
        int pi=partition(arr,low,high);
       
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
        

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
    
    quicksort(arr,low,high);
    printf("array after the quicksort:");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}