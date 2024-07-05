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

struct Node * DAB(struct Node * head){
    struct Node * ptr=head;
    head = head -> next;
    free(ptr);
    return head;
}
struct Node * DIB(struct Node * head,int index){
    struct Node * ptr=head;
    int i=0;
    while(i != index-1){
        ptr = ptr ->next;
        i++;
    }
    struct Node * q =ptr->next;
    ptr -> next = q-> next;
    free(q);
    return head;
}
struct Node * DLN(struct Node * head){
    struct Node * p =head;
    struct Node * q=head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);

    return head;
}
struct Node * DAN(struct Node * head,int value ){
    struct Node * p =head;
    struct Node * q=head->next;
    while(q->data != value && q->next !=NULL){
        p=p->next;
        q=q->next;
        if(p->data == value ){
            p=p->next;
            q=q->next;
        }
    }
    p->next=q->next;
    free(q);

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
printf("Before Deletion \n");
    LLT(head);
    //head=DAB(head);
    // head=DIB(head,1);
    //head=DLN(head);
    head=DAN(head,88);
printf("After Deletion \n");
    LLT(head);

    
    
    return 0;
}