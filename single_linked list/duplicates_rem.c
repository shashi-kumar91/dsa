#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

void display(struct node *j) {
    while (j != NULL) {
        printf("%d ", j->data);
        j = j->next;
    }
    printf("\n");
}

int count(struct node *p) {
    int c = 0;
    while (p != NULL) {
        c++;
        p = p->next;
    }
    return c;
}

void remove_duplicates(struct node *n) {
    struct node *p = n;
    
    while (p != NULL && p->next != NULL) {
        if (p->data == p->next->data) {
            struct node *temp = p->next;
            p->next = temp->next;
            free(temp);
        } else {
            p = p->next;
        }
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
        new->next = NULL;

        if (first == NULL) {
            first = t = new;
        } else {
            t->next = new;
            t = new;
        }

        printf("If you want to add another element, press 1; otherwise press 0: ");
        scanf("%d", &choice);
    }
    
    int x = count(first);
    printf("The number of nodes in the linked list is: %d\n", x);

    remove_duplicates(first);
    
    printf("Linked list after removing duplicates: ");
    display(first);
    
    return 0;
}
