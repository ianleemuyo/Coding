#include <stdio.h>

// Function prototype (with pointer arguments)
void swap(int *a, int *b);

int main() {
    int x = 10, y = 20;
    
    printf("Before swap:\n");
    printf("x = %d, y = %d\n", x, y);

    // Calling swap function with pointers
    swap(&x, &y);

    printf("After swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;  // Dereference a to get its value
    *a = *b;    // Dereference b and assign its value to a
    *b = temp;  // Assign temp (original value of a) to b
}
