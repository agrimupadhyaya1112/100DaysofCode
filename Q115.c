#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[100], t[100];
    int freq_s[26] = {0};
    int freq_t[26] = {0};
    int i;

    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        freq_s[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++) {
        freq_t[t[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq_s[i] != freq_t[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");

    return 0;
}