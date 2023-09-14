#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
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
int srtd(struct node* g){
    int x=INT_MIN;
    while(g!=0){
        if(g->data<x){
            printf("it is not sorted");
            return 0;
        }
        x=g->data;
        g=g->next;
  

}}
    


void display(struct node*j){
    while(j!=0){
        printf("\n%d ",j->data);
        j=j->next;
          printf("\n");
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
    count(first);
    srtd(first);
    
    display(first);
   
    return 0;
}