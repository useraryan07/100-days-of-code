//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0};

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        if (ch1 >= 'a' && ch1 <= 'z')
            freq1[ch1 - 'a']++;
        if (ch2 >= 'a' && ch2 <= 'z')
            freq2[ch2 - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
