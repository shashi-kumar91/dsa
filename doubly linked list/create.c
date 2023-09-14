#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node*prev;
    int data;
    struct node*next;
}*first=NULL;
int main(){
    int n;
    printf("enter the size of linked list:");
    scanf("%d",&n);
    struct node *t=NULL;
    struct node*new;
    for(int i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
        new->next=NULL;
        printf("enter the data element %d:",i+1);
        scanf("%d",&new->data);
        if(first==NULL){
            first=t=new;
            t->next=NULL;
            t->prev=NULL;
    
        }
        else{

            
            t->next=new;
            new->prev=t;
            t=new;
            
        }
        



    }
    struct node*x=t->prev;
    
    printf("the elements in a linked list:");
    while(t!=NULL){
        printf("%d",t->data);
        t=t->prev;
    }
}