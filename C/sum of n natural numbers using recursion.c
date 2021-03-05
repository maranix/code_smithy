#include <stdio.h>

int sum(int N) {
    if (N!=0) {
        return(N+sum(N-1));
    }
    else {
        return N;
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Sum of first %d numbers: %d", n, sum(n));
}