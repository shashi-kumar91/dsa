//insert at any ith position

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;
void display(struct node*j){
    while(j!=0){
        printf("\n%d ",j->data);
        j=j->next;
          printf("\n");
    }
  
    
}
int count(struct node*p){
    int c=0;
    while(p!=0){
        c++;
        p=p->next;
    }
    printf("the no.of node in a linked list is:%d",c);
    return c;
}

void end(struct node*n,int c){
    printf("select the position where do you want to insert:");
    
    
    struct node *add;
    add=(struct node*)malloc(sizeof(struct node));
    printf("\nthe element which do you want to add:");
    scanf("%d",&add->data);
    
        for(int i=0;i<c;i++){
            n=n->next;

        }
       
        add->next=n->next;
        n->next=add;
    
}

int main() {
    struct node *new;
    int choice = 1;
    struct node *t = NULL; // Initialize t to NULL

    while (choice) {
        new = (struct node*)malloc(sizeof(struct node));

        printf("Enter the element: ");
        scanf("%d", &new->data);
        new->next=NULL;

        if (first == NULL) {
            first = t = new;
        } else {
            t->next = new;
            t = new;
        }

        printf("If you want to add another element, press 1; otherwise press 0: ");
        scanf("%d", &choice);
    }
    int x=count(first);
    ith(first,x);
    display(first);
    return 0;
}
