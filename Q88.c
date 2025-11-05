#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int i=0;
    while(str[i]!='\0'){
    if(isspace(str[i])){
        str[i] = '-';
    }
    i++;
}


    printf("%s", str);

    return 0;
}