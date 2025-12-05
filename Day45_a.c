//Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[1000], ch;
    int count = 0;

    fgets(str, sizeof(str), stdin);
    ch = getchar();

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c': %d\n", ch, count);
    return 0;
}
