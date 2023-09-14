#include<stdio.h>
#include<stdlib.h>

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

void shiftLastToFirst(struct node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;  // Empty list or only one node, no need to shift
    }

    struct node* last = *head;
    struct node* secondLast = NULL;

    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    last->next = *head;  // Connect the last node to the first
    *head = last;  // Update the head to point to the new first node
    secondLast->next = NULL;  // Update the second last node to be the new last node
}

int main() {
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);

    struct node* new;
    struct node* t = NULL;

    for (int i = 0; i < n; i++) {
        new = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &new->data);
        new->next = NULL;

        if (first == NULL) {
            first = t = new;
        } else {
            t->next = new;
            t = new;
        }
    }

    printf("The linked list before shifting last to first is: ");
    display(first);

    shiftLastToFirst(&first);

    printf("The linked list after shifting last to first is: ");
    display(first);

    return 0;
}
