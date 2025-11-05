#include <stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++){
        for(int j=i+1; str[j]!='\0'; j++){
            if(str[i]== str[j] && islower(str[i])){
            printf("%c", str[i]);
            return 0;
            }
        }
    }

    printf("No repeated lowercase.");
    return 0;

}