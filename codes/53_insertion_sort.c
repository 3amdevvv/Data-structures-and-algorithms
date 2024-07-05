#include <stdio.h>
#include <stdlib.h>

int printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void InsertionSort(int *A,int n){
    int key,j=0;
    for(int i=0;i<=n-1;i++){
        key=A[i];
        j=i-1;
        printf(" key %d \n j %d \n",key,j);
        while(A[j] > key && j>=0){
                printf("A[j+1] %d \n ",A[j+1]);
                A[j+1]=A[j];
                j--;
            
        }
        A[j+1]=key;
    }
}


int main(){
    int A[] = {13,2,53,74,15,46};
    // -1   0   1   2   3   4    5
    //      13  2   53  74  15   46

    // -1   0   1   2   3   4    5
    //      13 | 2   53  74  15   46  key=2 , i=1 , j=0

    // -1   0   1   2   3   4    5
    //      2   13 | 53  74  15   46  key=53 , i=2 , j=1

    // -1   0   1   2   3   4    5
    //      2  13   53 | 74  15   46  key=74 , i=3 , j=2

     // -1   0   1   2   3   4    5
    //      2  13   53  74 | 15   46  key=15 , i=4 , j=3 ....


    int n=6;
    printArray(A,n);
    InsertionSort(A,n);
    printArray(A,n);
    return 0;

}