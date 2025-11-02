#include <stdio.h>
int main(){
    int units,costunit, bill=0;
    printf("Enter no. of units consumed: ");
    scanf("%d", &units);
    printf("Enter cost of 1 unit: ");
    scanf("%d", &costunit);

    bill = costunit * units;
    printf("Total fine - $%d", bill);

    return 0;
} 