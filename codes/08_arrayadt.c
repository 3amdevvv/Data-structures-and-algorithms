#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void show(struct myArray *a){
    for(int i=0 ; i < a->used_size ; i++)
    {
        printf("the element are %d \n",(a->ptr)[i]);
    }
}

void setVal(struct myArray *a){
    int n;
    for(int i=0 ; i < a->used_size ; i++)
    {
        printf("enter element %d ",i);
        scanf("enter element %d ",&n);
        (a->ptr)[i]=n;
    }
}
int main(){
    struct myArray marks;
    createArray(&marks , 10 ,3);
    printf("We are running set val now ");
    setVal(&marks);
    printf("We are running show val now ");
    show(&marks);
    return 0;
}