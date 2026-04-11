#include <stdio.h>

int main() {

    int data[] = {45, 12, 89, 5, 23};

    int n = 5, temp;

    for (int step = 0; step < n - 1; ++step) {
        for (int i = 0; i < n - step - 1; ++i) {
            // To sort in descending order, change > to <

            if (data[i] > data[i + 1]) {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < n; ++i) printf("%d ", data[i]);
    return 0;
}
