#include <stdio.h>

struct Person {
    char name[100];
    int age;
};

int main() {
    struct Person p;

    printf("Enter full name: ");
    fgets(p.name, sizeof(p.name), stdin);  // reads full line including spaces

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("\nName: %sAge: %d\n", p.name, p.age);

    return 0;
}
