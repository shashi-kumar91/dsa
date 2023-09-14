#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

void insert(int key) {
    struct node *p, *r;
    struct node *t = root;
    if (root == NULL) {
        // This is for the very first node
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->left = p->right = NULL;
        root = p;
    } else {
        while (t != NULL) {
            r = t;
            if (key < t->data) { // Change '>' to '<' here
                t = t->left;
            } else if (key > t->data) {
                t = t->right;
            } else {
                return;
            }
        }
        // This is for upcoming nodes creation
        p = (struct node *)malloc(sizeof(struct node));
        p->data = key;
        p->left = p->right = NULL;
        // Now linking the nodes
        if (key < r->data) {
            r->left = p;
        } else {
            r->right = p;
        }
    }
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}

int main() {
    int choice = 1;
    int x;
    int key;
    while (choice) {
        printf("Enter 1 for insert or 2 for inorder traversal: ");
        scanf("%d", &x);
        if (x == 1) {
            printf("Enter the key to insert: ");
            scanf("%d", &key);
            insert(key);
        }
        if (x == 2) {
            inorder(root);
        }
        printf("Enter 1 to continue and 0 to exit: ");
        scanf("%d", &choice);
    }
    return 0;
}
