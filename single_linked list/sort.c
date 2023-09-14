#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *first = NULL;

void sort(struct node *p, int n) {
    int arr[n];
    struct node *b = p;
    
    for (int i = 0; i < n; i++) {
        arr[i] = p->data;
        p = p->next;
    }

    int temp;

    for (int j = 0; j < n - 1; j++) {
        for (int k = 0; k < n - j - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }

    for (int v = 0; v < n; v++) {
        b->data = arr[v];
        b = b->next;
    }
}

void display(struct node *j) {
    while (j != NULL) {
        printf("%d ", j->data);
        j = j->next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter the size of the linked list:");
    scanf("%d", &n);

    struct node *newNode = NULL;
    struct node *t = NULL;

    for (int i = 0; i < n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("enter element %d:", i + 1);
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (first == NULL) {
            first = t = newNode;
        } else {
            t->next = newNode;
            t = newNode;
        }
    }

    sort(first, n);
    display(first);

    
    return 0;
}