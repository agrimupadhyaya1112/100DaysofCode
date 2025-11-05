#include <stdio.h>
int main(){
    int num1,num2,hcf;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int min = (num1>num2)? num1 : num2;

    for(int i=1; i<=min; i++){
        if (num1%i == 0 && num2%i == 0){
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", num1, num2,hcf);

    return 0;
}