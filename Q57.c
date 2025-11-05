#include <stdio.h>

int main(){
    int n;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    int arr[100];
    int sum = 0;
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
