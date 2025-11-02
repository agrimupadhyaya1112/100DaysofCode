#include <stdio.h>
int main(){
    int n, i = 1, prod=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for ( i =1; i<=n ; i++){
        if (i % 2 == 0)
        prod *=i;

        
    }
        printf("%d", prod);

        return 0;
    
}