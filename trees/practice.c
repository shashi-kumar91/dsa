#include<stdio.h>
#include<stdlib.h>
struct node{
    int x;
    struct node *lchild;
    struct node *rchild;
};
struct que{
    int size;
    int front;
    int rear;
    struct node **arr;
};
void create(struct que *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->arr=(struct node **)malloc(q->size * sizeof(struct node *));

}
void enque(struct que *s,struct node *x){
    if((s->rear+1)%s->size==s->front){
        printf("queue is full\n");
    }
    s->rear=(s->rear+1)%s->size;
    s->arr[s->rear]=x;
    if(s->front==-1){
        s->front=0;

    }
}
struct node *deque(struct que *d){
    struct node *b=NULL;
    if(d->front==-1){
        printf("queue is empty\n");

    }
    else{
        b=d->arr[d->front];
        if(d->front==d->rear){
            d->rear=d->front=-1;
        }
        else{
            d->front=(d->front+1)=-1;
        }
    }
}
