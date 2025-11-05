#include <stdio.h>

int main(){
    int n;
    int arr[100];
    int max, min;

    printf("Enter length of array: ");
    scanf("%d", &n);

    printf("Enter the elements of your array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (int i=1; i<n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
        else if (arr[i]< min){
            min = arr[i];
        }
    }

    printf("Maximum = %d ", max);
    printf("Minimum = %d ", min);

    return 0;
}