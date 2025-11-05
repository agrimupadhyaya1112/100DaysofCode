#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n<2){
        printf("No prime number less than 2.");
    }

    for(int i=2; i<=n; i++){
        int isprime = 1;
        for(int j=2; j*j <= i; j++){
            if(i%j != 0){
                isprime = 1;
            }
            else{
                isprime =0;
                break;
            }
        }
        if(isprime == 1){
            printf("%d ", i);
        }
        
    }
    return 0;
}


