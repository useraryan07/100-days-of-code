//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    int maxLen = 0, maxStart = 0;
    int len = 0, start = 0;

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        if (sentence[i] == '\0' || sentence[i] == '\n')
            break;
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}