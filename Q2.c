#include <stdio.h>

int main() {
int num1, num2;
printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
printf("Sum=%d, ", num1 + num2);
 printf("Diff=%d, ", num1 - num2);
 printf("Product=%d, ", num1 * num2);
if (num2 != 0) {
     printf("Quotient=%d\n", num1 / num2);
 } else {
    printf("Quotient=Undefined (division by zero)\n");
}
 return 0;
}
