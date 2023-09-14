#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue() {
    struct node *newNode;
    int x;
    newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Queue is full\n");
    } else {
        printf("Enter the new element you want to insert: ");
        scanf("%d", &x);
        newNode->data = x;
        newNode->next = NULL;
        if (front == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
}

int dequeue() {
    int x = -1;
    struct node *t;
    if (front == NULL) {
        printf("Queue is empty\n");
    } else {
        t = front;
        front = front->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display(struct node *front) {
    struct node *q = front;
    while (q != NULL) {
        printf("%d  ", q->data);
        q = q->next;
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("Enter: 1.enqueue, 2.dequeue, 3.display, 4.exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                printf("Dequeued element: %d\n", dequeue());
                break;
            case 3:
                printf("Queue contents: ");
                display(front);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
