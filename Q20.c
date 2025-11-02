#include <stdio.h>
int main(){
    int day;
    printf("Enter day: ");
    scanf("%d ", &day);

    if (day == 1)
    printf("Monday");

    if (day == 2)
    printf("Tuesday");

    if (day == 3)
    printf("Wednesday");

    if (day == 4)
    printf("Thursday");

    if (day == 5)
    printf("Friday");

    if (day == 6)
    printf("Saturday");
    if (day ==7)
    {
        printf("Sunday");
    }
    return 0;
}