#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    if (n == 0) return 0;

    int maxLength = 0;
    int left = 0;
    int right = 0;
    int charMap[256]; 

    for (int i = 0; i < 256; i++) {
        charMap[i] = -1;
    }

    while (right < n) {
        if (charMap[s[right]] != -1) {
            left = (charMap[s[right]] + 1 > left) ? charMap[s[right]] + 1 : left;
        }
        charMap[s[right]] = right;
        maxLength = (right - left + 1 > maxLength) ? right - left + 1 : maxLength;
        right++;
    }
    return maxLength;
}

int main() {
    char s[1000];
    scanf("%s", s);
    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}