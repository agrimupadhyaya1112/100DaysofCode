#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer");
    scanf("%d", &num);
    
    if (num>0)
        printf("Positive");
    else
    {
        if(num<0)
        printf("Negative");
        else
        printf("0");
    }
    return 0;
}