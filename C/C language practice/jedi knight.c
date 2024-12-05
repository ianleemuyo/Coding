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
    } else if (height >= 200 && age >= 21 && age <= 25 && citizenship == 1) {
        printf("Applicant is ACCEPTED (Meets all requirements).\n");
    } else {
        printf("Applicant is REJECTED (Does not meet the requirements).\n");
    }
    
    return 0;
}
