#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum=0;
    int n= 1;

    if(num<0) num = -num;

    while(num != 0){
        n = num%10;
        sum += n;
        num /= 10;
    }
    printf("sum = %d", sum);
    return 0;
}