#include <stdio.h>
#include <string.h>

void reverseString(char* s) {
    int left = 0;
    int right = strlen(s) - 1;
    char temp;

    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char codeName[100];
    if (scanf("%s", codeName) != 1) return 0;

    reverseString(codeName);
    printf("%s\n", codeName);

    return 0;
}