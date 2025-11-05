#include <stdio.h>
int main()
{
    int num, div;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=2; i<num; i++){
        div = num %i;
        if(div == 0){
            printf("It is a prime number.");
            break;
        }
        else{
        printf("Not a prime number.");
        break;
        }
    }
    return 0;
}