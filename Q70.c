#include <stdio.h>

void reverse(int *arr, int start , int end){
    int temp=0;
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        }
}

void rotateright(int *arr, int n, int k){
    k = k % n;

    reverse(arr, 0 , n-1);

    reverse (arr, 0 , k-1);

    reverse(arr, k, n-1);
}

void printarr(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main(){
       int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array :");
    int arr[100];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the postion of rotation: ");
    scanf("%d", &k);

    rotateright(arr, n, k);
    printarr(arr, n);
    
    return 0;
}