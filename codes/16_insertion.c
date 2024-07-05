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
struct Node * IAB(struct Node *head,int data ){
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next=head;
    return ptr;
}
struct Node * IIB(struct Node *head ,int data,int index ){
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while(i != index-1){
        p = p -> next ;
        i++;
    } 
    ptr -> data=data;
    ptr -> next =p-> next;
    p -> next = ptr;
    return head;
}
struct Node * IAE(struct Node *head,int data ){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node * IAN(struct Node *head,struct Node *prevNode,int data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr ->data =data;
    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
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
    printf("AFTER");
    //head = IAB(head,70);
    //head = IIB(head,73,1);
    head = IAE(head, 56);
    //head=IAN(head, third, 45);
    LLT(head);
    return 0;
}