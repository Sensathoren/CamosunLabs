#include <stdio.h>

int main() {
    printf("Please give me the year that interests you: ");
    int year;
    scanf("%d", &year);
    printf("\nPlease give me a number for the month that interests you: ");
    int month;
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
        break;
        case 2:
            if (year % 4 == 0) {
                printf("29 days\n");
            } else {
                printf("28 days\n");
            }
        break;
    }

    return 0;
}