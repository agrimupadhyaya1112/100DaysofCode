#include <stdio.h>
int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float amount;
    int i;
    scanf("%f %f %f", &principal, &rate, &time);
    simpleInterest = (principal * rate * time) / 100;
    amount = principal;
    for (i = 0; i < time; i++) {
        amount = amount * (1 + rate / 100);
    }
    compoundInterest = amount - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);
    return 0;
}