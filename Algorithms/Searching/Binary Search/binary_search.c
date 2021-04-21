#include <stdio.h>
#include <stdbool.h>

/**
 * C Program for Sequential Search Algorithm.
 * TODO: Implement malloc/calloc method to allocate the array.
 * 
*/
int main() {
    int list[9] = {1,2,32,8,19,42,62,34,24};
    int n;
    bool found = false;
    

    printf("Enter a number to search in the list: ");
    scanf("%d", &n);

    for (int i = 0; i < sizeof(list)/sizeof(list[0]); i++){
        if(list[i] == n){
            printf("\n%d found at list index: %d\n",n, i);
            found = true;
            break;
        }
    }
    if (found == false){
        printf("\n%d not found in the list\n",n);
    }
    return 0;
}