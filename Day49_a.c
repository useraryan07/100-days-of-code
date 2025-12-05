//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);

    int i = 0;
    while (name[i] != '\0' && name[i] != '\n') {
        if (i == 0 && name[i] != ' ') {
            printf("%c", toupper(name[i]));
        } else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }

    printf("\n");
    return 0;
}
