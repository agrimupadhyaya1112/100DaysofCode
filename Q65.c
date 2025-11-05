#include <stdio.h>

 int binsearch(int *arr, int n, int key){
    int st= 0;
    int end= n-1;
    while(st<=end){
         int mid= (st+end)/2;
        if(arr[mid] == key)
         return mid;

         else if(arr[mid]<key)
        st = mid+1;

        else 
        end = mid-1;
    }
     return -1;
 }
 int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
 int arr[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

   int key;
   printf("Enter key: ");
   scanf("%d", &key);

     printf("%d", binsearch(arr, n, key));
    return 0;
 }