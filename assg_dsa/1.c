#include <stdio.h>
#include <stdlib.h>

struct node {
    char name[20];
    char roll[20];
    int marks[5];
    int avg;
    struct node *next;
} *first = NULL;

int main() {
    struct node *p;
    struct node *t = NULL; 
    printf("Enter the number of students: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        p = (struct node *)malloc(sizeof(struct node));
        printf("Enter the name: ");
        scanf("%s", p->name);
        printf("Enter the roll no: ");
        scanf("%s", p->roll);

        int sum = 0;
        for (int j = 0; j < 5; j++) {
            printf("Enter marks %d: ", j + 1);
            scanf("%d", &p->marks[j]);
            sum += p->marks[j];
        }
        
        int a = sum / 5;
        p->avg = a;
        p->next = NULL; 

        if (first == NULL) {
            first = t = p;
        } else {
            t->next = p; 
            t = p; 
        }
    }

    struct node *current = first; 
    while (current != NULL) {
        printf("\nName: %s", current->name);
        printf("\nRoll: %s", current->roll);
        
        for (int j = 0; j < 5; j++) {
            printf("\nMark %d: %d", j + 1, current->marks[j]);
        }
        
        printf("\nAverage: %d\n", current->avg);
        printf("\n");
        
        current = current->next; 
    }

    return 0;
}