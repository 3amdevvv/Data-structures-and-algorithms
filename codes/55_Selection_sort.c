#include <stdio.h>

int printArray(int *A,int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void SelectionSort(int *A,int n){
    int IndexOfMin,temp;
    for(int i=0;i<n-1;i++)
    {
        IndexOfMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j] < A[IndexOfMin])
            {
                IndexOfMin=j;
                
            }
        }
        temp=A[i];
        A[i] = A[IndexOfMin];
        A[IndexOfMin]=temp;
    }
}
int main(){
    int A[] = {13,2,53,74,15,46};
    int n=6;
    printArray(A,n);
    SelectionSort(A,n);
    printArray(A,n);
    return 0;
}