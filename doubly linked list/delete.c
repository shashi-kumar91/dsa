#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
} *first = NULL;
void delete(struct node*a){
    struct node*m=a;
    struct node*i=a;
    struct node*s=NULL;
    printf("enter the position where do you want to delete:");
    int pos;
    scanf("%d",&pos);
    for(int j=0;j<pos-1;j++){
        s=i;
        i=i->next;
    }
    if(pos==1){
        m=m->next;
        m->prev=NULL;
        free(m);



    }
   else{
        s->next=i->next;
        i->next->prev=s;
        free(i);


   }
}



void display(struct node* v) {
    while (v != NULL) {
        printf("%d", v->data);
        v = v->next;
        if (v != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}


int main() {
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);
    struct node* t = NULL;
    struct node* new;
    for (int i = 0; i < n; i++) {
        new = (struct node*)malloc(sizeof(struct node));
        new->next = NULL;
        printf("Enter the data element %d: ", i + 1);
        scanf("%d", &new->data);
        if (first == NULL) {
            first = t = new;
            t->next = NULL;
            t->prev = NULL;
        } else {
            t->next = new;
            new->prev = t;
            t = new;
        }
    }

    struct node* x = t->prev;
    // insert(first);
    delete(first);
    //display(first);

    printf("The elements in the linked list: ");
    display(first);
    

    return 0;
}