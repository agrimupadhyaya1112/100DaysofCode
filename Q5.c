#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("enter temperature");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9.0/5.0)+32;
    printf("temperature in fahrenheit is %.2f\n",fahrenheit);
    return 0;

}
