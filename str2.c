#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);  // reads string without spaces

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("\nName: %s\nAge: %d\n", p.name, p.age);

    return 0;
}
