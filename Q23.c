#include <stdio.h>
int main(){
    int days, fine=0, i;
    printf("Enter no. of days after the deadline: ");
    scanf("%d", &days);

    for (i = 0; i<=days; i++){
        fine += i * 5;
    }
    printf("Total fine - $%d", fine);

    return 0;
} 
