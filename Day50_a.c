//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    fgets(date, sizeof(date), stdin);

    sscanf(date, "%2s/%2s/%4s", day, month, year);

    int m = atoi(month);

    printf("%s-%s-%s\n", day, months[m - 1], year);

    return 0;
}
