#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    float sum = 0;
    float numerator = 1;
    for (int i=1; i<=n; i++){
        numerator = 2*i;
        sum += numerator/(4*i - 1);

    }
    printf("%f", sum);
    return 0;
}