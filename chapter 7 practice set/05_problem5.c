// Write a program containing a function which reverses the array passed to it.
#include <stdio.h>

void printArray(int arr[],int n);

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
void reverse(int arr[],int n);

void reverse(int arr[],int n){
    for (int t = 0; t < n/2; t++)
    {
        int temp;
        temp=arr[t];
        arr[t]=arr[n-t-1];
        arr[n-t-1]=temp;
    }
    
}

int main(){
    int arr[]={1,2,3,4,5};
    printArray(arr,5);
    reverse(arr,5);
    printArray(arr,5);
    return 0;
}