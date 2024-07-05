#include <stdio.h>
 void LS(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
        printf("the element has been found \n");
        }
    }
 }

int BS(int arr[], int size, int element) {
    int low = 0, mid, high;
    high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            return mid;
        }
        if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    // Return -1 to indicate that the element was not found
    return -1;
}
 int main(){
    int arr[100]={10,20,30,40,50,60,70,80,90};
    int size=sizeof(arr)/sizeof(int);
    int element=50;
    //LS(arr,size,element);
    
    int searchIndex = BS(arr, size, element);
     if (searchIndex != -1) {
        printf("The element %d was found at index %d \n", element, searchIndex);
    } else {
        printf("The element %d was not found in the array \n", element);
    }
 }