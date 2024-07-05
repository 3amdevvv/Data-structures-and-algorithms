#include <stdio.h>
struct stack{
    int top;
    int size;
    int *arr;
};
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
    struct stack *s;
    s->top=-1;
    s->size=80;
    s->arr=(int *)malloc(s->size * sizeof(int));

    s->arr[0]=87;
    s->top++;

    if(isEmpty(s)){
        printf("the stack is empty \n");
    }else{
        printf("The stack is not empty \n");
    }
    return 0;
}