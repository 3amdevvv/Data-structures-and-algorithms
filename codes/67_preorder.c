#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * createNode(int data){
    struct node *n=(struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left=NULL;
    n->right=NULL;
}

void preOrder(struct node * root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->right);
        preOrder(root->left);
        
    }
}

void postOrder(struct node * root){
    if(root!=NULL){
        
        preOrder(root->left);
        preOrder(root->right);
        printf("%d ",root->data);
    }
}
int main(){

    // struct node *n=(struct node *)malloc(sizeof(struct node));
    // n->data = 2;
    // n->left=NULL;
    // n->right=NULL;

    // struct node *n1=(struct node *)malloc(sizeof(struct node));
    // n1->data = 1;
    // n1->left=NULL;
    // n1->right=NULL;

    // struct node *n2=(struct node *)malloc(sizeof(struct node));
    // n2->data = 4;
    // n2->left=NULL;
    // n2->right=NULL;
    //   2
    //   1     4
    //   5 6
    struct node *n = createNode(2);
    struct node *n1 = createNode(1);
    struct node *n2 = createNode(4);
    struct node *n3 = createNode(5);
    struct node *n4 = createNode(6);
   
    n->left=n1;
    n->right=n2;
    n1->left=n3;
    n1->right=n4;
    preOrder(n);
    return 0;
}