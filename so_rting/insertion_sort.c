#include<stdio.h>
void insertion_sort(int arr[],int n){
    int key,i,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void main(){
    int n,i;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the element %d:",i);
        scanf("%d",&arr[i]);

        
    }
    printf("the array after sorting:");
    insertion_sort(arr[n],n);
    for(i=0;i<n;i++){
       // printf("enter the element %d:",i);
        printf("%d\n",arr[i]);

        
    }
    //return 0;

}