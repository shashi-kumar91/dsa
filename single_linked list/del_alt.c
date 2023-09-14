#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} *first = NULL;

void display(struct node* j) {
    while (j != NULL) {
        printf("%d ", j->data);
        j = j->next;
    }
    printf("\n");
}
void del_alt(struct node*s){
    struct node *prev;
    struct node *node;
    prev=s;
    node=s->next;
    while(prev!=NULL&&node!=NULL){
        prev->next=node->next;
        free(node);
        prev=prev->next;
        if(prev!=NULL){
            node=prev->next;
        }
    }


    
}


    
int main() {
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);

    struct node* new_node;
    struct node* t = NULL;

    for (int i = 0; i < n; i++) {
        new_node = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &new_node->data);
        new_node->next = NULL;

        if (first == NULL) {
            first = t = new_node;
        } else {
            t->next = new_node;
            t = new_node;
        }
    }

    printf("The linked list before shifting last to first is: ");
    display(first);

   del_alt(first);

    printf("The linked list after shifting last to first is: ");
    display(first);

    return 0;
}
