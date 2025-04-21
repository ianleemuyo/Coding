#include <stdio.h>

int decimalToBinary(int decimal, int binary[]) {
    int i = 0;

    if (decimal == 0) {
        binary[i++] = 0;
        return i;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    return i; 
}

int main() {
    int decimal;
    int binary[32]; 
    int size;

    printf("Input any decimal number : ");
    scanf("%d", &decimal);

    size = decimalToBinary(decimal, binary); 

    printf("The Binary value is : ");
    for (int j = size - 1; j >= 0; j--) { 
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}


