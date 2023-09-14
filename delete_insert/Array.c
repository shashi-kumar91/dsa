#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int a[n];
    printf("enter elements of a");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n;i>=01;i--){
        printf("%d",a[i]);
    }
    return 0;
}