#include <stdio.h>

int gcd(int x, int y) {
    if (y!=0) {
        return (y, x%y);
    }
    else {
        return x;
    }
}

void main() {
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("G.C.D of %d and %d is: %d", n1, n2, gcd(n1, n2));
}