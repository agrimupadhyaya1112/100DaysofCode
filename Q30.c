#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int r=0;
    while(num>0){
    r = r*10;
    r = r + (num%10);
    num = num/10;
    }
    
    printf("Reversed number is: %d", r);
    return 0;
}