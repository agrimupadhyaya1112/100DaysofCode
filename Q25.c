#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    char o;
    printf("Enter the operations you want to perform: ");
    scanf(" %c ", &o);

    switch(o){
        case '+':
        printf("The sum is %d", a+b);
        break;

        case '-':
        printf("The difference is %d", a-b);
        break;

        case '*':
        printf("The product is %d", a*b);
        break;

        case '/':
        if ( b != 0)
        printf("The division is %d", a/b);

        else
        printf("Not divisible by 0");
        break;

        case '%':
        if (b != 0)
        printf("The mode is %d", a % b);

        else
        printf("Not divisble by 0");
        break;

        default:
        printf("Enter a valid operation.");

    }
    return 0;
} 
