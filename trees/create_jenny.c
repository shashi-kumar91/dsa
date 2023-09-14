#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create() {
    int x;
    struct node *new_node;

    printf("\nEnter -1 for no node:");
    scanf("%d", &x);

    if (x == -1) {
        return NULL;
    }

    new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL) {
        printf("Memory allocation failed.");
        exit(1);
    }

    new_node->data = x;
    printf("Enter the data for the left node of %d:", x);
    new_node->left = create();
    printf("Enter the data for the right node of %d:", x);
    new_node->right = create();

    return new_node;
}

void preorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    
    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root) {
    if (root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}


void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    printf("%d\n", root->data);
    inorder(root->right);
}


int count(struct node *root) {
    if (root == NULL) {
        return 0;
    }

    int z = count(root->left);
    int y = count(root->right);
    return z + y + 1;
}
int sum(struct node*root){
    int s,j;
    if(root!=NULL){
        s=sum(root->left);
        j=sum(root->right);
        return s+j+root->data;
    }
    return 0;
}
int height(struct node*root){
    int f,g;
    if(root!=NULL){
        f=height(root->left);
        g=height(root->right);
        if(f>g){
            return f+1;
        }
        else{
            return g+1;
        }
        

    }
    return 0;
}
int leaf_node(struct node *root){
    
    int ab,cd;
    struct node *w=root;
    if(w!=NULL){
        ab=leaf_node(w->left);
        cd=leaf_node(w->right);
        if(w->right==NULL&&w->left==NULL){
            return ab+cd+1;
        }
        else{
            return ab+cd;
        }


    }
    return 0;
}
int degree_2(struct node *root){
    if(root!=NULL){
        if(root->left!=NULL && root->right!=NULL){
            return degree_2(root->left)+degree_2(root->right)+1;
        }
        else{
            degree_2(root->left)+degree_2(root->right);
        }
    }
    return 0;
}
int degree_1(struct node*root){
    if(root!=NULL){
        if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL)){
            return degree_1(root)+degree_1(root)+1;
        }
        else{
            return degree_1(root->left)+degree_1(root->right);
        }
    }
    return 0;
}
int main() {
    struct node *root;
   
    root = create();
    int choice;

    do {
        printf("1 for preorder***2 for postorder***3 for inorder***4 for count****5 for sum***6 for height***7 for leaf_node***8 for degree2 nodes***9 for degree_1 node***0 for exit:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Preorder\n");
                preorder(root);
                break;
            case 2:
                printf("Postorder\n");
                postorder(root);
                break;
            case 3:
                printf("Inorder\n");
                inorder(root);
                break;
            case 4:
                printf("Count: %d\n", count(root));
                break;
            case 0:
                break;
            case 5:
                printf("the sum of nodes in tree is %d",sum(root));
                break;
            case 6:
                printf("fun is %d",height(root));
                break;
            case 7:
                printf("number of leaf nodes is %d",leaf_node(root));
                break;
            case 8:
                printf("number of nodes with degree 2 is %d",leaf_node(root));
                break;
            case 9:
                printf("number of nodes with degree 1 is %d",leaf_node(root));
                break;

            default:
                printf("Invalid choice\n");
        }
    } while (choice != 0);

    return 0;
}
