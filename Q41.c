#include <stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalnum = num;

    int lastdigit = num % 10;

    int digits = (int)log10(num);

    int firstdigit = num /(int)pow(10, digits);

    num = num%(int)pow(10,digits);

    num = num/10;

    int swapnum = lastdigit * (int)pow(10,digits) + num * 10 + firstdigit;


    printf("Swapped number = %d", swapnum);

    return 0;
}

