#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int max(int A[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(A[i]  > max){
            max=A[i];
        }
    }
    return max;
}

void count(int *A,int n){
    int i,j;
     int maxi = max(A, n); 
     int* count = (int *) malloc((maxi+1)*sizeof(int));

    for(int i=0;i<maxi+1;i++){
        count[i]=0;
    }
    
    for(int i=0;i<n;i++){
        count[A[i]]=count[A[i]]+1;
    }
    i=0;
    j=0;

    while(i<=maxi){
        if (count[i]>0){
            A[j]=i;
            count[i]--;
            j++;
        }else{
            i++;
        }
    }
}


int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    count(A, n);
    printArray(A, n); 
    return 0;
}

