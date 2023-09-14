#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

int max(struct node *p) {
    int x=-32768;

    while (p != NULL) {
        if(p->data>x){
            x=p->data;
         
        }
         p=p->next;
       
}
    printf("the max element:%d",x);
}

int main() {
    struct node *new;
    int choice = 1;
    struct node *t = NULL; // Initialize t to NULL

    while (choice) {
        new=(struct node*)malloc(sizeof(struct node));

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

    max(first);
    return 0;
}
