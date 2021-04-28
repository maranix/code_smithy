#include <stdio.h>

// TODO: Dynamic memory allocation


/* 
    Two Dimensional Array also known as a Matrix.
    This particular function is a 2x2 Matrix.
    It has 2 columns and 2 rows.
*/

int twoDimensionalArrayRowMajorOrder(){
    int myArray[3][3] = {{1,2,3}, {2,3,1}, {3,1,2}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("a[%d][%d] = %d\n",i,j,myArray[i][j]);
        }
        printf("\n");
    }

    return 1;
}

void main() {
    printf("\nTwo Dimensional Array Row Major Order (Matrix): \n");
    twoDimensionalArrayRowMajorOrder();
}