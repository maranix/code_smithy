#include <stdio.h>

// TODO: Dynamic memory allocation


/* 
    Two Dimensional Array also known as a Matrix.
    This particular function is a 2x2 Matrix.
    It has 2 columns and 2 rows.
*/

int twoDimensionalArray(){
    int myArray[2][2] = {{1,1}, {2,2}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t",myArray[i][j]);
        }
        printf("\n");
    }

    return 1;
}

/* 
    A Three Dimensional (3D) array is a collection of Two Dimensional (2D) arrays.
    The first shows block size, second for row size, and the third is for column size.
    Row and Column size is the dimension of 2D array. Whereas the block size shows how many numbers of 2D arrays.
*/

int threeDimensionalArray(){
    int myArray[2][2][2] = {
                                {{1,1}, {1,2}},
                                {{2,1}, {2,2}}
                            };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d\t",myArray[i][j][k]);   
            }
            printf("\n");
        }
        printf("\n");
    }

    return 1;
}


void main() {
    printf("Two Dimensional Array (Matrix): \n");
    twoDimensionalArray();
    
    printf("\n\n\nThree Dimensional Array : \n");
    threeDimensionalArray();
}