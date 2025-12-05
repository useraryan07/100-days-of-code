//Count spaces, digits, and special characters in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]))
            special++;
    }

    printf("Spaces: %d\nDigits: %d\nSpecial Characters: %d\n", spaces, digits, special);

    return 0;
}
