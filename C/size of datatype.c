#include <stdio.h>

void main() {
    printf("char: %ld bytes\n", sizeof(char));
    printf("short: %ld bytes\n", sizeof(short));
    printf("integer: %ld bytes\n", sizeof(int));
    printf("float: %ld bytes\n", sizeof(float));
    printf("long: %ld bytes\n", sizeof(long));
    printf("double: %ld bytes\n", sizeof(double));
    printf("long double: %ld bytes\n", sizeof(long double));
}