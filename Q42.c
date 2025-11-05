#include <stdio.h>
int main(){
    int num, div, sum=0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    for (int i=1; i<num; i++){
        div = num%i;
        if (div == 0)
        sum +=i;

        else
        continue;
    }

    if (sum == num)
    printf("It is a perfect number.");

    else
    printf("It is not a perfect number.");

    return 0;
}