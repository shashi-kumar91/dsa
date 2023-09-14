#include<stdio.h>
struct node{
    int data;
    struct node*next;
}*first=NULL;
void count(struct node*p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    printf("the no.of node in a linked list is:%d",c);
}
int search(struct node*q,int key){
    if(q==0){
        return NULL;
    }
    if(key==q->data){
        return q;
    }
    return q=q->next;

    
    
    //printf("the memory where search is found:",)
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
    printf("enter th key element:\n");
    int key;
    scanf("%d",&key);
    count(first);
    printf("\nthe memory %d",search(first,key));
    return 0;
}