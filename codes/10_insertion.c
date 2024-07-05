#include <stdio.h>
void myArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
}

int indInsertion(int arr[],int size,int element,int index,int capacity){
        if(size>=capacity){
           // printf("insertion not successful");
            return -1;
        }
        for(int i=size-1 ; i>=index ; i-- ){
            
            arr[i+1]=arr[i];
            
        }
        arr[index]=element;
        //printf("insertion  successful");
        return 1;
}
int main(){
    int arr[100]={8,9,87,89,55};
    
    int element=45,index=5,size=5;
    myArr(arr,size);
    indInsertion(arr,size,element,index,100);
    size +=1;
    printf("after insertion \n");
    myArr(arr,size);
    return 0;
    int result=indInsertion(arr,size,element,index,100);
    if(result==-1){
        printf("\nInsertion failed");
    }
    else if (result==1)
    {
        size+=1;
        myArr(arr,size);            
    }
}