#include <stdio.h>
#include <stdlib.h>
struct stack{
    int top;
    int size;
    char *arr;
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

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack Overflow \n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack is Underflow \n");
        return -1;
    }else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
int Match(char a,char b){
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    if(a=='{' && b=='}'){
        return 1;
    }
    return 0;
}
int ParanthesisMatch(char * exp){
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr =(char *)malloc(sp->size * sizeof(char));
    char popped_char;
    for(int i=0;exp[i]!='\0';i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(sp,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
             if(isEmpty(sp)){
                return 0;
             }
                popped_char = pop(sp);
                
                if(!Match(popped_char,exp[i])){
                    return 0;
                }
             }
        }
        if (isEmpty(sp)){
        return 1;
    }else{
        return 0;
    }
    }
    

int main(){
    char * exp = "[4-6]((8)(9-8)[])";
    if(ParanthesisMatch(exp)){
        printf("the para is balanced \n");
    }else{
        printf("The para is not balanced \n");
    }
    return 0;
}