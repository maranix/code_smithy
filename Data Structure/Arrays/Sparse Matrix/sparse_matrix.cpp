#include <iostream>
#include <vector>

/*
    TODO: Dynamic memory allocation (Vectors are dynamic array).
    TODO: Compact Matrix from Sparse Matrix.
*/

using namespace std;

#define MAX 3

/* 
    A sparse matrix is a matrix in which most of the elements are zero.
    There is no strict definition how many elements need to be zero for a matrix to be considered sparse,
    a common criterion is that the number of non-zero elements is roughly the number of rows or columns.

    Formulae = number_of_zeros > ((row*column)/2)
*/

int sparseMatrix() {
    vector<vector<int>> myArray = {{0,1,0}, {2,0,0}, {0,2,0}};
    int count=0;

    cout<<"Sparse Matrix : \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout<<myArray[i][j]<<"\t";
            if (myArray[i][j] == 0) {
                count++;
            }
        }
        cout<<"\n"<<endl;
    }

    if (count > ((MAX * MAX)/2)) {
        cout<<"Matrix is Sparse.";
    } else {
        cout<<"Matrix is not Sparse.";
    }

    return 1;
}

int main() {
    sparseMatrix();
    return 0;
}