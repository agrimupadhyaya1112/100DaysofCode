#include <stdio.h>
int main(){
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    int vowels =0;
    int cons=0;
    int i=0;

    while(str[i] != '\0'){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i] =='o' || str[i]=='u' ){
            vowels++;
            i++;
        }
        else{
            cons++;
            i++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels,cons);

    return 0;
}
