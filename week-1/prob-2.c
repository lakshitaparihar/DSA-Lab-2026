// A program in C to find the max, min, and average of numbers entered by the user, using arrays.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max, min;
    float sum = 0, avg;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    avg = sum / n;

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}