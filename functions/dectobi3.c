#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int errorHandler(int decimal) { // Funtion is to check if the input number is negative
    if (decimal < 0) {
        printf("Error: Negative numbers are not supported.\n");
        return 1; // if negative
    }
    return 0; // if not negative
}

int decimalToBinary(int decimal, int binary[]) { // Function to convert decimal to binary and store in an array
    int i = 0;

    if (decimal == 0) { // If the number is zero, inputs 0 in array
        binary[i++] = 0;
        return i;
    }

    while (decimal > 0) { // converts decimal to binary by dividing by 2 repeatedly until the value is 0
        binary[i] = decimal % 2; // Stores the remainders in the array
        decimal = decimal / 2; // gets the quotient to modulus again
        i++;
    }

    return i; // stores the value as the function
}

int main() {
    int decimal; 
    int binary[32]; 
    int size;

    printf("Input any decimal number: ");
    
    if (scanf("%d", &decimal) != 1) { // Checks if the user inputted a integer
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1; // if not integer
    }

    if (errorHandler(decimal)) { // calls errorHandler to check for error/negative input
        return 1; // if it finds error
    }

    size = decimalToBinary(decimal, binary); // stores the value returned from the function into the size

    printf("The Binary value is: ");
    
    for (int j = size - 1; j >= 0; j--) { // to sort and display the array in its reverse form 
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0; // exit syempre
}
