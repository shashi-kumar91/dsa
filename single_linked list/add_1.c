#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

void add_1(struct node *head) {
    struct node *a = head;
    struct node *b = head;

    int c = 0;
    while (a != NULL) {
        c = c + 1;
        a = a->next;
    }
    int arr[c];
    for (int i = 0; i < c; i++) {
        arr[i] = b->data;
        b = b->next;
    }
    int u[c];
    for (int i = c - 1; i >= 0; i--) {
        u[c - 1 - i] = arr[i];  // Fixed the index here

    }
    int sum = 0;
    for (int g = 0; g < c; g++) {
        sum = sum + ((u[g]) * pow(10, g));

    }
    int d = sum + 1;
    for (int g = c - 1; g >= 0; g--{
        arr[g] = d % 10;
        d /= 10;  

    }
    struct node *l = head;
    for (int j = 0; j < c; j++) {  
        l->data = arr[j];
        l = l->next;
    }
}

void display(struct node *m) {
    while (m != NULL) {
        printf("%d ", m->data);
        m = m->next;
    }
    printf("\n"); 
}

int main() {
    struct node *new_node;
    struct node *t = NULL;
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        if (first == NULL) {
            first = t = new_node;
        } else {
            t->next = new_node;
            t = new_node;
        }
    }
    add_1(first);
    display(first);

    return 0;
}
