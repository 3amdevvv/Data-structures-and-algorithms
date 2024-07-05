#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    //int top;
    struct Node * next;
};
struct Node *top=NULL;

int isEmpty(struct Node * top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct Node * top){
    struct Node * p=(struct Node *)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node * Push(struct Node * top,int x){
    if(isFull(top)){
        printf("Stack is overflow \n");
    }else{
        struct Node *n=(struct Node *)malloc(sizeof(struct Node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}

int Pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow \n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}

void LLT(struct Node * ptr ){
    while(ptr -> next !=NULL){
        printf("Element %d \n",ptr ->data);
        ptr = ptr ->next;
    }
}
int Peek(int pos){
    struct Node * ptr = top;
    for(int i=0;(i<pos-1 && ptr!=NULL);i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}

int main(){
    
    top = Push(top, 7);
    top = Push(top, 78);
    top = Push(top, 8);
    top = Push(top, 789);
    LLT(top);
    // linkedListTraversal(top);
    for(int i=1;i<=4;i++){
        printf("Element is %d \n",Peek(i));
    }
    return 0;
}