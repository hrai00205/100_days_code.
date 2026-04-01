#include <stdio.h>
#include <stdbool.h>

bool isIdentity(int size, int matrix[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Check the diagonal
            if (i == j) {
                if (matrix[i][j] != 1) return false;
            } 
            // Check everywhere else
            else {
                if (matrix[i][j] != 0) return false;
            }
        }
    }
    return true;
}

int main() {
    int n = 3;
    int myMatrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    if (isIdentity(n, myMatrix)) {
        printf("It is an Identity Matrix.\n");
    } else {
        printf("It is NOT an Identity Matrix.\n");
    }

    return 0;
}