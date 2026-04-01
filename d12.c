#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    if (r != c) {
        printf("False\n");
        return 0;
    }

    int matrix[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    bool symmetric = true;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) printf("True\n");
    else printf("False\n");

    return 0;
}