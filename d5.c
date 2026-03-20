#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    if (scanf("%d", &n1) != 1) return 0;
    int arr1[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    if (scanf("%d", &n2) != 1) return 0;
    int arr2[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];

    for (int x = 0; x < n1 + n2; x++) {
        printf("%d%s", merged[x], (x == n1 + n2 - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}