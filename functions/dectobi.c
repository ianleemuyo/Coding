#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32]; 
    int i = 0;

    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }


}

int main() {
    int decimal;
    int binary[32]; 
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
