#include <stdio.h>
void myArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}

int indDeletion(int arr[],int size,int index,int capacity){
        if(size>=capacity){
           // printf("insertion not successful");
            return -1;
        }
        for(int i=index ; i<size-1 ; i++ ){
            arr[i]=arr[i+1];
        }
        
        //printf("insertion  successful");
        return 1;
}
int main(){
    int arr[100]={8,9,87,89,55};
    
    int index=0,size=5;
    myArr(arr,size);
    indDeletion(arr,size,index,100);
    size -=1;
    printf("after insertion \n");
    myArr(arr,size);
    return 0;
    
}