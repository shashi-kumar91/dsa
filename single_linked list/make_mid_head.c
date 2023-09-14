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

void mid_head(struct node* head) {
    if (head == NULL || (head)->next == NULL) {
        return;  
    }

    struct node* last = head;
    struct node* secondLast = NULL;

    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    last->next = head;  
    head = last;  
    secondLast->next = NULL;  
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

    mid_head(first);

    printf("The linked list after shifting last to first is: ");
    display(first);

    return 0;
}
