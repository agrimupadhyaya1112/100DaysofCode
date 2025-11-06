#include <stdio.h>

int search(int *arr, int n){
    
    for(int i=0; i<n; i++){
        int total = 0, leftsum=0;
        for(int i=0; i<n; i++){
            total += arr[i];
        }

        for(int i=0; i<n; i++){
            if(leftsum == total-leftsum - arr[i]){
                return i;
            }
            leftsum += arr[i];
        }
    }
    return -1;

}

int main(){

    int n;
    printf("Enter the size of arr: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int ans =search(arr, n);

    printf("%d", ans);
    return 0;

}