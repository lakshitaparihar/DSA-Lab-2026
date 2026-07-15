// A program to find the mean and the median of the numbers stored in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    float sum = 0, mean, median;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    mean = sum / n;

    // Bubble Sort to arrange array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n % 2 != 0) {
        median = arr[n / 2];
    } else {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);

    return 0;
}