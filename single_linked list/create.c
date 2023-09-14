#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} *head = NULL;

void create(int n, int arr[]) {
    head = (struct node*)malloc(sizeof(struct node));
    head->data = arr[0];
    head->next = NULL;

    struct node* newnode;
    struct node* temp = head;

    for (int i = 1; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = arr[i];
        newnode->next = NULL;

        temp->next = newnode;
        temp = temp->next;
    }
}

void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void freeList() {
    struct node* temp = head;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    create(8, arr);
    display();
    freeList(); // Free allocated memory
    return 0;
}
