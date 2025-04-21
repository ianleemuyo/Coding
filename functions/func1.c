#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1 = 10, num2 = 20;
    int result = add(num1, num2); // Function call
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}