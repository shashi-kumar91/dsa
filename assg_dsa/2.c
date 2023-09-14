#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[25];
    char roll[10];
    int marks;
    struct node *next;
} *first = NULL;

void swap(struct node *b, int a, int k) {
    struct node *d = b;
    struct node *l = b;
    char tname[25];
    char rnum[10];
    int tmarks;

    for (int i = 0; i < a && d != NULL; i++) {
        d = d->next;
    }

    for (int j = 0; j < k && l != NULL; j++) {
        l = l->next;
    }

    strcpy(tname, d->name);
    strcpy(rnum, d->roll);
    tmarks = d->marks;

    strcpy(d->name, l->name);
    strcpy(d->roll, l->roll);
    d->marks = l->marks;

    strcpy(l->name, tname);
    strcpy(l->roll, rnum);
    l->marks = tmarks;
}

void search(struct node *g) {
    while (g != NULL) {
        if ((strcmp(g->roll, "122ad0001") == 0) || 
            (strcmp(g->roll, "122ad0004") == 0) || 
            (strcmp(g->roll, "122ad0023") == 0) || 
            (strcmp(g->roll, "122ad0025") == 0)) {
            printf("%s\n", g->name);
            printf("%s\n", g->roll);
            printf("%d\n", g->marks);
        }
        g = g->next;
    }
}
void sort(struct node*a){

}

void deleteNodes(struct node*z) {
    struct node *j = z;
    struct node *o = NULL;
    struct node *r = j;

    while (j != NULL) {
        if ((strcmp(j->roll, "122ad0001") == 0) || 
            (strcmp(j->roll, "122ad0004") == 0) || 
            (strcmp(j->roll, "122ad0023") == 0) || 
            (strcmp(j->roll, "122ad0025") == 0)) {
            if (o == NULL) {
                first = j->next;
            } else {
                o->next = j->next;
            }
            free(j);
            j = o ? o->next : first;
        } else {
            o = j;
            j = j->next;
        }
    }
}

void display(struct node *x){
    while (x != NULL) {
        printf("%s\n", x->name);
        printf("%s\n", x->roll);
        printf("%d\n", x->marks);
        printf("************\n");
        x = x->next;
    }
}

int main() {
    struct node *p;
    struct node *t = NULL; 
    char n[25][25] = {
        "Emma", "Liam", "Olivia", "Noah", "Ava",
        "Isabella", "Sophia", "Mia", "Jackson", "Aiden",
        "Lucas", "Caden", "Harper", "Evelyn", "Michael",
        "James", "Benjamin", "Elijah", "Oliver", "Amelia",
        "Emily", "Abigail", "Elizabeth", "Alexander", "William"
    };
    char num[25][10] = {
        "122ad0001", "122ad0002", "122ad0003", "122ad0004", "122ad0005",
        "122ad0006", "122ad0007", "122ad0008", "122ad0009", "122ad0010",
        "122ad0011", "122ad0012", "122ad0013", "122ad0014", "122ad0015",
        "122ad0016", "122ad0017", "122ad0018", "122ad0019", "122ad0020",
        "122ad0021", "122ad0022", "122ad0023", "122ad0024", "122ad0025"
    };
    int m[25] = {
        85, 92, 78, 64, 90, 73, 88, 95, 82, 70,
        68, 76, 83, 89, 91, 87, 79, 60, 72, 94,
        81, 67, 98, 75, 86
    };

    for (int i = 0; i < 25; i++) {
        p = (struct node *)malloc(sizeof(struct node));
        strcpy(p->name, n[i]);
        strcpy(p->roll, num[i]);
        p->marks = m[i];

        if (first == NULL) {
            first = t = p;
        } else {
            t->next = p; 
            t = p; 
        }
    }

    struct node *current = first; 

    
    search(first);
    deleteNodes(first);

    printf("After deleting:\n");
    display(first);

    swap(first, 1, 2);
    swap(first, 4, 17);
    swap(first, 20, 0);

    printf("After swapping:\n");
    display(first);

   
    
    return 0;
}

