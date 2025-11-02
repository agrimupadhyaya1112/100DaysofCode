#include <stdio.h>
int main(){
    int inp;
    printf("Enter percentage: ");
    scanf("%d", &inp);

    if (inp>=0 && inp<=10)
    printf("Grade J");

    if (inp>=11 && inp<=20)
    printf("Grade I");

    if (inp>=21 && inp<=30)
    printf("Grade H");

    if (inp>=31 && inp<=40)
    printf("Grade G");

    if (inp>=41 && inp<=50)
    printf("Grade F");

    if (inp>=51 && inp<=60)
    printf("Grade E");

    if (inp>=61 && inp<=70)
    printf("Grade D");

    if (inp>=71 && inp<=80)
    printf("Grade C");

    if (inp>=81 && inp<=90)
    printf("Grade B");

    if (inp>=91 && inp<=100)
    printf("Grade A");

return 0;

}