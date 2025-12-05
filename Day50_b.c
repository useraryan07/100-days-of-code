//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
