#include <stdio.h>

int factorial(int N){
    if(N>=1) {
        return(N*factorial(N-1));
    }
    else {
        return 1;
    }
}

void main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);


    printf("%d", factorial(n));
}