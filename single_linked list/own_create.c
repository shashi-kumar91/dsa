#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL;

void display(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("element: %d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct node *new, *temp;
    int choice = 1;

    while (choice) {
        new = (struct node *)malloc(sizeof(struct node));
        
        printf("enter the element:");
        scanf("%d", &new->data);
        new->next = NULL;
        
        if (head == NULL) {
            head = temp = new;
        } else {
            temp->next = new;
            temp = new;
        }
        
        printf("if you want to continue press 1 otherwise 0:");
        scanf("%d", &choice);
    }
    
    display(head);
    
    // Free allocated memory to avoid memory leaks
    temp = head;
    while (temp != NULL) {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    
    return 0;
}
