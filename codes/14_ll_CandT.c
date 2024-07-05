#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};


void LLT(struct Node * ptr ){
    while(ptr -> next !=NULL){
        printf("Element %d \n",ptr ->data);
        ptr = ptr ->next;
    }
}
int main(){
    struct Node * head;
    struct Node * secound;
    struct Node * third;
    struct Node * fourth;

    head=(struct Node *)malloc(sizeof(struct Node ));
    secound=(struct Node *)malloc(sizeof(struct Node ));
    third=(struct Node *)malloc(sizeof(struct Node ));
    fourth =(struct Node *)malloc(sizeof(struct Node ));
    
    head -> data= 8;
    head -> next = secound;

    secound -> data= 88;
    secound -> next = third;

    third -> data= 888;
    third -> next = fourth;

    fourth -> data= 8888;
    fourth -> next = NULL;

    LLT(head);


    
    
    return 0;
}