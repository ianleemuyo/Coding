#include <stdio.h>

// Function declaration
int sumArray(int arr[], int size);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Sum of array: %d\n", sumArray(numbers, size));
    return 0;
}

// Function definition
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}