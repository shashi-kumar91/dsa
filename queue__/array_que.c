#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int*a;
};
void create(struct queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->a=(int*)malloc(q->size*(sizeof(int)));


}
void enque(int x,struct queue *q){
    if(q->rear==q->size-1){
        printf("queue is full");
    }
    else{
        q->rear++;
        q->a[q->rear]=x;
    }
}
int dequeu(struct queue *q){
    int x=-1;
    if(q->rear==q->front){
        printf("queue is empty");
    }
    else{
        q->front++;
        x=q->a[q->front];

    }
    return x;
}
void display(struct queue *q){
    for(int i=q->front+1;i<=q->rear;i++){
        printf("%d",q->a[i]);
    }

}

int main(){
    struct queue q;
    create(&q,5);
    enque(33,&q);
    enque(22,&q);
    enque(223,&q);
    dequeu(&q);
    display(&q);
    return 0;


}