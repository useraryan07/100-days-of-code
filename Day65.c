// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int freqS[26] = {0}, freqT[26] = {0};
    int lenS = strlen(s), lenT = strlen(t);

    if (s[lenS - 1] == '\n') s[lenS - 1] = '\0';
    if (t[lenT - 1] == '\n') t[lenT - 1] = '\0';

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
