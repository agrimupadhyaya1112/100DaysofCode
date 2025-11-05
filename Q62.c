#include <stdio.h>

int revarr(int *arr, int n){
    int st=0;
    int end=n-1;
    int temp;
    while(st<end){
        temp=arr[st];
        arr[st]=arr[end];
        arr[end]=temp;
        st++;
        end--;
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    
    revarr(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i] );
    }
    
    return 0;
}