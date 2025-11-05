#include <stdio.h>
int main(){
    int num, rev, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    int r=0;
    while(num>0){
    r = r*10;
    r = r + (num%10);
    num = num/10;
    }
    
    if (original == r)
    printf("It is a palindrome.");

    else
    printf("Not a palindrome.");

    return 0;

}