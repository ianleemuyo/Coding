#include <stdio.h>
#include <string.h>

int negativeHandler(int decimal) { // function is to check if the input number is negative
    if (decimal < 0) {
        printf("Error: Negative numbers are not supported. Please enter a valid integer.\n");
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

int isValidInteger(char *input, int *decimal) { // Function to check if the input contains only a valid integer
    char extra;
    
    if (sscanf(input, "%d %c", decimal, &extra) != 1) {  // Checks if there are extra things in the input
        return 0; // if it has error in input
    }
    return 1; // good integer
}

int main() {
    char name[80];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // name ng user

    char choice;
    do {
        int decimal; 
        int binary[32]; 
        int size;
        char input[50];

        do {
            printf("%s, Input any decimal number: ", name);
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = 0; // for the name of user

            if (!isValidInteger(input, &decimal)) { // Validate input
                printf("Error: Invalid input. Please enter a valid integer\n");
                continue;
            }

            if (negativeHandler(decimal)) { // calls errorHandler to check for negative input
                continue; // If it finds an negative input, it asks again
            }

            break; // exits loop if input is good
        } while (1);

        size = decimalToBinary(decimal, binary); // stores the value returned from the function into the size

        printf("%s, The Binary value is: ", name);
        
        for (int j = size - 1; j >= 0; j--) { // to sort and display the array in its reverse form 
            printf("%d", binary[j]);
        }
        printf("\n");
        do {
            printf("%s, Do you want to try again? (y/n): ", name);
            scanf(" %c", &choice);
            while (getchar() != '\n');
            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
                printf("Error: Invalid input. Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye, %s!\n", name); 
    return 0;
}
