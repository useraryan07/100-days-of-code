//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[1000];
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';

    int i = 0;
    while (name[i] != '\0') {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        } else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            int j = i + 1;
            int spaceCount = 0;
            for (int k = j; name[k] != '\0'; k++) {
                if (name[k] == ' ') spaceCount++;
            }
            if (spaceCount == 0) {
                printf("%s", &name[j]);
                break;
            } else {
                printf("%c. ", toupper(name[i + 1]));
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
