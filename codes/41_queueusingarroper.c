#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int* arr;
};
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("Stack Overflow queue is full");
    }else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct queue *q){
    int val=-1;
    if(isEmpty(q)){
        printf("stack Undeflow");
    }else{
    q->f++;
    val = q->arr[q->f];
    }
    return val;
    
}
int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}
int main(){
    struct queue q;
    q.f=q.r=0;
    q.size=100;
    q.arr=(int *)malloc(q.size * sizeof(int));
    enqueue(&q,18);
    enqueue(&q,76);
    enqueue(&q,790);
    enqueue(&q,72);
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }

    return 0;
}