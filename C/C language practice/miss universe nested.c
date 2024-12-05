#include <stdio.h>

int main() {
    float height;
    int weight, age, education;
    char name[25];

    printf("Enter your name:\n");
    scanf("%s", &name);

    printf("Enter applicant's height (in feet, e.g., 5.5): \n");
    scanf("%f", &height);

    printf("Enter applicant's weight (in kilograms): \n");
    scanf("%d", &weight);

    printf("Enter applicant's age: \n");
    scanf("%d", &age);

    printf("Enter education level (1 for HS graduate or higher, 0 for less than HS graduate): \n");
    scanf("%d", &education);

    if (height >= 5.0) {
        if (weight >= 50) {
            if (age >= 18) {
                if (education == 1) {
                    printf("%s is ACCEPTED (Meets all requirements).\n", name);
                } else {
                    printf("%s is NOT ACCEPTED (Education is less than HS graduate).\n", name);
                }
            } else {
                printf("%s is NOT ACCEPTED (Age is less than 18 years).\n", name);
            }
        } else {
            printf("%s is NOT ACCEPTED (Weight is less than 50 kilos).\n", name);
        }
    } else {
        printf("%s is NOT ACCEPTED (Height is less than 5').\n", name);
    }

    return 0;
}
