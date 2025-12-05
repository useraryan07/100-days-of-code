//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    int len = strlen(sentence);
    if (sentence[len - 1] == '\n') sentence[len - 1] = '\0';

    char *word_start = sentence;
    for (int i = 0; ; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            reverse(word_start, sentence + i - 1);
            word_start = sentence + i + 1;
        }
        if (sentence[i] == '\0') break;
    }

    printf("%s\n", sentence);

    return 0;
}
