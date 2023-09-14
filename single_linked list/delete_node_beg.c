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

void dbeg(struct node*n){
    n=n->next;
    
    struct node*j;
    j=n;
     while(j!=0){
        printf("\n%d ",j->data);
        j=j->next;
          printf("\n");
    }
  
    
    
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
    dbeg(first);
    //display(first);
    return 0;
}
