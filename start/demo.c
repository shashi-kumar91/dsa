#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct que {
    struct node* s1;
    struct node* s2;
};

void push(struct node** top, int x) {
    struct node* m = (struct node*)malloc(sizeof(struct node));
    if (m == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    m->data = x;
    m->next = *top;
    *top = m;
}

int pop(struct node** top) {
    if (*top == NULL) {
        printf("Stack is empty.\n");
        return -1; 
    }
    struct node* temp = *top;
    int data = temp->data;
    *top = (*top)->next;
    free(temp);
    return data;
}

void enqueue(struct que* q, int x) {
    push(&(q->s1), x);
}

int dequeue(struct que* q) {
    if (q->s2 == NULL) {
        while (q->s1 != NULL) {
            int data = pop(&(q->s1));
            push(&(q->s2), data);
        }
    }
    return pop(&(q->s2));
}

int main() {
    struct que q;
    q.s1 = NULL;
    q.s2 = NULL;

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    printf("Dequeue: %d\n", dequeue(&q));
    printf("Dequeue: %d\n", dequeue(&q));
    printf("Dequeue: %d\n", dequeue(&q));

    return 0;
}
