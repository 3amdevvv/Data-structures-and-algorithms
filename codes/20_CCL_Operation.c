#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};


void LLT(struct Node * head ){
    struct Node * ptr =head;
    
    do{
        printf("Element %d \n",ptr->data);
        ptr = ptr ->next;
    }while(ptr != head);
}
struct Node * IAB(struct Node * head,int data){
    
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node ));
    ptr->data=data;
    struct Node * p=head->next;
    while(p ->next != head){
        p=p->next;
    }
    p->next = ptr;
    ptr->next =head;
    head=ptr;
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
    
    head -> data= 1;
    head -> next = secound;

    secound -> data= 3;
    secound -> next = third;

    third -> data= 5;
    third -> next = fourth;

    fourth -> data= 6;
    fourth -> next = head;

    LLT(head);
    head=IAB(head,67);
    LLT(head);
    
    
    return 0;
}