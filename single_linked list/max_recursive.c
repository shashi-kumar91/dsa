#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

int max(struct node *p) {
    int x=0;
    if(p==0){
        return -32768;
    }
    else{
        x=max(p->next);
        if(x>p->data){
            return x;
        }
        else{
            return p->data;
        }
    }

    
}
    


int main() {
    struct node *new;
    int choice = 1;
    struct node *t = NULL; 

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

    printf("%d",max(first));
    return 0;
}
