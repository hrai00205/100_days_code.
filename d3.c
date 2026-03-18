#include <stdio.h>

int main() {
    int n, k, comparisons = 0, found = -1;

    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element found at index: %d\n", found);
    } else {
        printf("Element not found\n");
    }
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}