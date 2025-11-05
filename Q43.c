#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalnum = num;
    int digit;
    int sum=0;
    
    while(num>0){
        digit = num%10;
        int fact =1;
        for(int j=1; j<=digit; j++){
            fact *= j;
        }
        sum += fact;
        num /= 10;
    }
    
    if( originalnum == sum)
    printf("It is a strong number.");

    else
    printf("It is not a strong number.");

    return 0;
    
}
