//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found\n");
    return 0;
}
