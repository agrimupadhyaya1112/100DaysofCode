#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter index of the number to delete: ");
    scanf("%d", &num);

    for(int i=num; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    n--;

    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}