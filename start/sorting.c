#include<stdio.h>
int main(){
    int n,temp,min;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n],i;
    printf("enter the elements of a");

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
min=a[0];
for(int i=1;i<n;i++){
    if(min>a[i]){
        temp=a[i];
        a[i]=min;
        min=temp;
    
    }
}
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}