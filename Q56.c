#include <stdio.h>

void printarr(int *arr, int n ){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
 }
int main(){
    int  n;
    printf("Enter no. of elements of array: ");
    scanf("%d", &n);

    int arr[100];                               //input elements of array
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printarr(arr, n);

    return 0;
}