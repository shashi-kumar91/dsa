#include<stdio.h>
#include<stdlib.h>
struct que{
    int size;
    int front;
    int rear;
    int *s;
};
void create(struct que *q){
    int n;
    printf("enter the size of the queue array:");
    scanf("%d",&n);
    q->size=n;
    q->front=q->rear=0;
    q->s=(int *)malloc(q->size*(sizeof(int)));
}
void enque(struct que*q){
    int x;
    printf("enter the element do yo you want to insert:");
    scanf("%d",&x);
    if(q->front==(q->rear+1)%q->size){
        printf("the queue is full");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->s[q->rear]=x;
    }
}
int deque(struct que *q){
    int l=-1;
    if(q->front==q->rear){
        printf("the queue is empty");
    }
    else{
        q->front=(q->front+1)%q->size;
        l=q->s[q->front];

    }
    return l;
}
void display(struct que *q){
    for(int i=q->front+1;i<=q->rear;i++){
        printf("%d",q->s[i]);
        printf("\n");
    }

}
int main(){
    int j;
    struct que *q;
    create(q);
    while(1){
        printf("enter: 1.enqueu,2.dequeu3.display,4.exit");
        scanf("%d",&j);
        if(j==1){
            enque(q);
        }
        if(j==2){
            deque(q);
        }
        if(j==3){
            display(q);
        }
        if(j==4){
            break;
        }

    }
}