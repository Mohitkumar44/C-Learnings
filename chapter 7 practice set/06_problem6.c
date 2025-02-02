#include <stdio.h>

int count(int arr[],int n);

int count(int arr[],int n){
    int counting=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            counting++;
        }  
    }
    return counting;  
}

int main(){
    int arr[]={12,8,65,4,6,54,5,-64,-45,-454,-6564};
    printf("The number of positive integer in that array are %d",count(arr,11));
    return 0;
}