#include <stdio.h>

int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int key, low = 0, high = 4, mid, found = 0;

    printf("Enter number to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (key > a[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}