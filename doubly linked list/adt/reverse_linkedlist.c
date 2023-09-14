#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*first=NULL;
void listReverse(struct node*head){
    struct node*a=head;
    struct node*b=head;
    
    int c=0;
    while(a!=NULL){
        c=c+1;
        a=a->next;
    }
    int arr[c];
    for(int i=0;i<c;i++){
        arr[i]=b->data;
        b=b->next;
    }
      struct node*l=head;
    for(int j=c-1;j>=0;j--){
        l->data=arr[j];
        l=l->next;
    }
    
}
void display(struct node*m){
    while(m!=NULL){
        printf("%d",m->data);
        m=m->next;
    }
    
}

int main(void) {
    struct node*new;
    struct node*t=NULL;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&new->data);
        new->next=NULL;
        if(first==NULL){
            first=t=new;
        }
        else{
            t->next=new;
            t=new;
        }
    }
    listReverse(first);
    display(first);
	
	return 0;
}

