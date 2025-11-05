#include <stdio.h>
int main(){
    int i=0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        i++;
    }

    printf("Total character= %d", i);
    return 0;
}
