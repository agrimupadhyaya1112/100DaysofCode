#include <stdio.h>
int main(){
    int n, fact,i;
    printf("Enter a number: ");
    scanf("%d", &n);

    fact = 1;
    for (i=1; i<=n ; i++){
        fact *= i;
    }
    printf("Factorial- %d", fact);
    return 0;
}
