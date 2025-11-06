#include <stdio.h>
#include <math.h>
int main(){

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    double val = num*(num+1)/2.0;
    int x = (int)sqrt(val);

    if(x*x == val){
        printf("%d", x);
    }

    else{
        printf("-1");
    }
    return 0;

}