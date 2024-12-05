#include <stdio.h>

int main() {
    float height;
    int weight, age, education;

    printf("Enter applicant's height (in feet, e.g., 5.5): ");
    scanf("%f", &height);

    printf("Enter applicant's weight (in kilograms): ");
    scanf("%d", &weight);

    printf("Enter applicant's age: ");
    scanf("%d", &age);

    printf("Enter education level (1 for HS graduate or higher, 0 for less than HS graduate): ");
    scanf("%d", &education);

    if (height >= 5.0 && weight >= 50 && age >= 18 && education == 1) {
        printf("Applicant is ACCEPTED (Meets all requirements).\n");
    } else {
        printf("Applicant is NOT ACCEPTED.\n");
        printf("Reasons for rejection:\n");
        if (height < 5.0) {
            printf("- Height is less than 5'.\n");
        }
        if (weight < 50) {
            printf("- Weight is less than 50 kilos.\n");
        }
        if (age < 18) {
            printf("- Age is less than 18 years.\n");
        }
        if (education == 0) {
            printf("- Education is less than HS graduate.\n");
        }
    }
    
    return 0;
}
