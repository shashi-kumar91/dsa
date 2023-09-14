#include<stdio.h>
int main(){
    int a[5];
    int i,count=0;
    int j;
    printf("enter five elements");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5-1;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }

    }
    printf("count=%d",count); 
    
}