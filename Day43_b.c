//Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    int start = 0, end = len - 1;
    int isPalindrome = 1;

    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
