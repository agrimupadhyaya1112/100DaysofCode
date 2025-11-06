#include <stdio.h>

int findfirst(int num[], int n, int target){
    int left=0;
    int right=n-1;
    int result = -1;
    while(left<=right){
        int mid= left+(right-left)/2;
        if(num[mid]==target){
            result=mid;
            right=mid-1;
        }
        else if(num[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
}

int findlast(int num[], int n, int target){
    int left=0;
    int right=n-1;
    int result = -1;

    while(left<=right){
        int mid=left+(right-left)/2;
        if(num[mid]==target){
            result = mid;
            left= mid+1;
        }
        else if(num[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int num[100];
    printf("Enter the elements of array:");
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    int target;
    printf("Enter the target: ");
    scanf("%d", &target);

    int first= findfirst(num, n, target);
    int last = findlast(num, n, target);

    printf("%d,%d", first, last);

    return 0;
}