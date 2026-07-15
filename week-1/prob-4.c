// A program to insert one element in an array and delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ---------- INSERTION ----------
    printf("Enter position to insert element (0-indexed): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // ---------- DELETION ----------
    printf("Enter position to delete element (0-indexed): ");
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}