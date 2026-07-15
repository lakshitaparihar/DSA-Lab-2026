//A program in C to find the max, min, and average of numbers entered by the user, using a loop.

#include <stdio.h>

int main() {
    int n, i;
    float num, max, min, sum = 0, avg;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%f", &num);
        sum = sum + num;

        if (i == 0) {
            max = num;
            min = num;
        } else {
            if (num > max)
                max = num;
            if (num < min)
                min = num;
        }
    }

    avg = sum / n;

    printf("Maximum = %.2f\n", max);
    printf("Minimum = %.2f\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}