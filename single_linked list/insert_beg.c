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
int beg(struct node*q){
    struct node*g;
    g=(struct node*)malloc(sizeof(struct node));
    printf("enter the element in your new node:");
    scanf("%d",&g->data);
    g->next=NULL;
    g->next=q->next;
    q=g;

}
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
    beg(first);
    display(first);
   
    return 0;
}