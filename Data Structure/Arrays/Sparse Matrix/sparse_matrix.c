#include <stdio.h>

/*
    TODO: Dynamic memory allocation.
    TODO: Compact Matrix from Sparse Matrix.
*/

#define MAX 3

/* 
    A sparse matrix is a matrix in which most of the elements are zero.
    There is no strict definition how many elements need to be zero for a matrix to be considered sparse,
    a common criterion is that the number of non-zero elements is roughly the number of rows or columns.

    Formulae = number_of_zeros > ((row*column)/2)
*/

int sparseMatrix(){
    int myArray[3][3] = {{0,1,0}, {2,0,0}, {0,2,0}};
    int count=0;

    printf("Sparse Matrix : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t",myArray[i][j]);
            if (myArray[i][j] == 0) {
                count++;
            }
        }
        printf("\n");
    }

    if (count > ((MAX * MAX)/2)) {
        printf("Matrix is Sparse.");
    } else {
        printf("Matrix is not Sparse.");
    }
    return 1;
}

void main() {
    sparseMatrix();
}