#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num = 5;
    printf("Factorial of %d: %d\n", num, factorial(num));
    return 0;
}

// Function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}