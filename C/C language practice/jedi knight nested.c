#include <stdio.h>

int main() {
    int height, age, citizenship, recommendee;

    printf("Enter applicant's height (in cm): ");
    scanf("%d", &height);

    printf("Enter applicant's age: ");
    scanf("%d", &age);

    printf("Enter citizenship code (1 for citizen, 0 for non-citizen): ");
    scanf("%d", &citizenship);

    printf("Enter recommendee code (1 for recommended, 0 for not recommended): ");
    scanf("%d", &recommendee);

    if (recommendee == 1) {
        printf("Applicant is ACCEPTED (Recommended by Jedi Master Obi Wan).\n");
    } else {
        if (height >= 200) {
            if (age >= 21 && age <= 25) {
                if (citizenship == 1) {
                    printf("Applicant is ACCEPTED (Meets all requirements).\n");
                } else {
                    printf("Applicant is REJECTED (Not a citizen of the Planet Endor).\n");
                }
            } else {
                printf("Applicant is REJECTED (Age is not between 21 and 25).\n");
            }
        } else {
            printf("Applicant is REJECTED (Height is less than 200 cm).\n");
        }
    }

    return 0;
}
