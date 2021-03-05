#include <stdio.h>

void main() {
    int month;

    printf("Enter a month from 1-12: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;
        case 2:
            printf("28/29 days");
            break;
        default:
            printf("Entered value is invalid");
    }
}