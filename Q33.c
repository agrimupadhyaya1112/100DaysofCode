#include <stdio.h>
#include <math.h>
int main(){
    int num,digit,count =0,sum=0,original;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while(temp >0){
        temp = temp/10;
        count++;
    }

    temp = num;         
    while (temp>0){
        digit = temp % 10;
        sum += pow(digit,count);
        temp = temp/10;
    }

    if (sum == original)
    printf("It is an Armstrong number.\n");

    else
    printf("Not an armstrong number.");

    return 0;
}
