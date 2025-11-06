#include <stdio.h>

void search(int *arr, int n, int x){
    int index = -1;
    int left =0;
    int right = n-1;

    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]>=x){
            index = mid;
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    printf("%d", index);
}

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the value of the x: ");
    scanf("%d", &x);

    search(arr, n, x);

    return 0;
}