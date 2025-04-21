#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print each element of the array
    printf("Elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
