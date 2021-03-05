#include <stdio.h>

void main() {
    int n,i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++) {
        if (i==5){
            continue;
            printf("The value of i is 5 but it will exit this block and continue running instead of exiting the loop");
        }
        else if (i==10) {
            break;
        }
        printf("%d\n", i);
    }
}