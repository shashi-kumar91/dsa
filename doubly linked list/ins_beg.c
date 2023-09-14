#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
} *first = NULL;

void insertbeg(struct node* f) {
    struct node* b = (struct node*)malloc(sizeof(struct node));
    printf("Enter the new element: ");
    scanf("%d", &b->data);
    b->prev = NULL;
    b->next = f;
    f->prev = b;
    first = b;
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

void insert_ith(struct node* j) {
    struct node* t = j;
    struct node* k = NULL;
    int n;
    printf("Enter the position where you want to insert: ");
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) { // Corrected loop condition
        k = t;
        t = t->next;
    }

    struct node* d;
    d = (struct node*)malloc(sizeof(struct node));
    printf("Enter the new element to insert at ith position: ");
    scanf("%d", &d->data);
    d->prev = k;
    d->next = t;
    if (k != NULL) {
        k->next = d;
    }
    if (t != NULL) {
        t->prev = d;
    }
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
    insert_ith(first);
    display(first);

    printf("The elements in the linked list: ");
    display(first);
    /*while (t != NULL) {
        printf("%d", t->data);
        if (t->prev != NULL) {
            printf(" ");
        }
        t = t->prev;
    }*/

    return 0;
}
