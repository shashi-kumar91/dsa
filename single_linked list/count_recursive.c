#include<stdio.h>
struct node{
    int data;
    struct node*next;
}*first=NULL;
int count(struct node*p){
    
    if(p==NULL){
        return 0;
    }
    else{
   return(count(p->next))+1;
    }
}
int main(){
    struct node*new;
    struct node*t=NULL;
    int choice=1;
    while(choice){
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the element:");
        scanf("%d",&new->data);
        new->next=NULL;
        if(first==NULL){
            first=t=new;
        }
        else{
            t->next=new;
            t=new;
        }
        printf("If you want to add another element, press 1; otherwise press 0:");
        scanf("%d",&choice);

    }
    printf("the nodes in a linked list:",count(first));
    return 0;
}