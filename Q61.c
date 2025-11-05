#include <stdio.h>
int linearsearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
        return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={ 1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(int);

    printf("%d", linearsearch(arr, n,5));
    return 0;
}