#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[100];
    int evencount = 0;
    int oddcount = 0;
    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if ( arr[i]%2 == 0){
            evencount ++;
        }
        else{
            oddcount++;
        }
    }

    printf("Even = %d, Odd= %d", evencount,oddcount);

    return 0;
}