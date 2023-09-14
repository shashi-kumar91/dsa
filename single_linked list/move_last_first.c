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

void midf(struct node* head, int n) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    struct node* first = head;
    struct node* second = head;
    struct node* mid = NULL;
    struct node* prev = NULL;
    
    for (int i = 0; i < n/2; i++) {
        prev = mid;
        mid = second;
        second = second->next;
    }

    if (prev != NULL) {
        prev->next = NULL; 
    }
    
    struct node* last = second;
    while (last->next != NULL) {
        last = last->next;
    }


    last->next = first;
    first = second;

    first = mid;
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

    midf(first, n);

    printf("The linked list after shifting last to first is: ");
    display(first);

    return 0;
}
