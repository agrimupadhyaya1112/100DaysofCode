#include <stdio.h>
int main(){
    char ch;
    printf("Enter a charaacter.");
    scanf("%c", &ch);

    //conversion of uppercase to lowecase using ascii value
    if (ch >= 'A' && ch <= 'Z'){
        ch = ch+32;
    }

    if (ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u'){
        printf("Vowel");
    }

    else if (ch >= 'a' && ch <= 'z'){
        printf("Consonant");
    }

    else{
        printf("Enter a valid character.");
    }

    return 0;
}