#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;

    // Assign values
    strcpy(person1.name, "Ian");
    person1.age = 19;

    // Print values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
