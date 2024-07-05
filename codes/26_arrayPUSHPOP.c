#include <stdio.h>
#include <stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow \n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is Underflow \n");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr -> top == ptr -> size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=6;
    s->arr=(int *)malloc(s->size * sizeof(int));
    printf("before pushing, Full: %d\n", isFull(s));
    printf("before pushing, Empty: %d\n", isEmpty(s));
    push(s,6);
    push(s,6);
    push(s,6);
    push(s,6);
    push(s,6);
    push(s,89);
    printf("%d",pop(s));
    printf("After pushing, Full: %d\n", isFull(s));
    printf("After pushing, Empty: %d\n", isEmpty(s));
    printf("THe stack has been created succesfully \n");
    return 0;
}
