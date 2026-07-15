// A a program to Linear & Binary search for a number in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, key, pos, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    // found = 0;
    // for (i = 0; i < n; i++) {
    //     if (arr[i] == key) {
    //         found = 1;
    //         pos = i;
    //         break;
    //     }
    // }

    // if (found)
    //     printf("Linear Search: Element found at position %d\n", pos);
    // else
    //     printf("Linear Search: Element not found\n");

    int temp, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    low = 0;
    high = n - 1;
    found = 0;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = 1;
            pos = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found)
        printf("Binary Search: Element found at position %d (in sorted array)\n", pos);
    else
        printf("Binary Search: Element not found\n");

    return 0;
}