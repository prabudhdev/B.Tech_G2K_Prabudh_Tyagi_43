#include <stdio.h>

int main() {

    int arr1[] = {1, 2, 3, 4, 5};

    int arr2[] = {5, 4, 3, 2, 1};

    int n = sizeof(arr1) / sizeof(arr1[0]); // number of elements

    int sum[n]; // array to store the sum

    // Add corresponding elements

    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i]
    }; // sum of two array and store in a
 sum variable

    // Print the result
    printf("Sum of two arrays: ");
    for (int i = 0; i < n; i++) // this loop is for printing sum value .
{
        printf("%d ", sum[i]);
    }

    return 0;
}