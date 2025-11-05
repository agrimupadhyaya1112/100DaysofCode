#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[50];
    int poscount= 0;
    int negcount=0;
    int zerocount=0;

    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        zerocount++;

        else if(arr[i] > 0)
        poscount++;

        else
        negcount++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", poscount, negcount, zerocount);
    return 0;
}