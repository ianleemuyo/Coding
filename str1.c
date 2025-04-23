#include <stdio.h>

struct Student {
    char name[50];
    float grade;
};

int main() {
    struct Student students[3] = {
        {"Ana", 89.5},
        {"Mark", 92.0},
        {"Leo", 85.3}
    };

    for(int i = 0; i < 3; i++) {
        printf("Student %d: %s, Grade: %.2f\n", i+1, students[i].name, students[i].grade);
    }

    return 0;
}
