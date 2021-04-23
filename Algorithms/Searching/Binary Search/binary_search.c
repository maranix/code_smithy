#include <stdio.h>
#include <stdbool.h>

/**
 * C Program for Binary Search Algorithm.
 * TODO: Implement malloc/calloc method to allocate the array.
 * 
*/
int main() {
    const int list[9] = {1,2,8,19,24,32,34,42,62};
    int n;
    bool found = false;
    int first=0, last=(sizeof(list) / sizeof(int))-1, mid;

    printf("Enter a number to search in the list: ");
    scanf("%d", &n);

    while (first <= last && !found) {
        mid=(first + last)/2;
        printf("Comparing %d with %d\n", list[mid], n);
        if (list[mid] == n) {
            printf("Match found!");
            found = true;
        }
        else {
            printf("Comparing %d with %d\n", list[mid], n);
            if (n < list[mid]) {
                last = mid - 1;
            }
            else {
                first = mid + 1;
            }
        }
    }

    if (found == false){
        printf("\n%d not found in the list\n",n);
    } else {
        printf("\n%d is present in the list\n",n);
    }
    return 0;
}