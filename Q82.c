#include <stdio.h>
int main(){
    char i;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        printf("%c\n", str[i]);
        i++;
    }

    return 0;

}