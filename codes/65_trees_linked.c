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

    struct node *n = createNode(2);
    struct node *n1 = createNode(1);
    struct node *n2 = createNode(4);

    n->left=n1;
    n->right=n2;
    return 0;
}