#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    // This is a comment
    
    printf("i like pizza!\n");
    printf("\"its really good!\"        \n-abraham lincoln probably");

    int x; // declaration
    x = 123; // initialization
    int y = 231; // declartion + initialization

    int age = 21; // integer
    float gpa = 2.05; // floating point number
    char grade = 'C'; //single character 
    char name[] = "Bro"; //array of characters

    printf("\nHello %s",name);
    printf("\nYou are %d years old", age);
    printf("\nYour average grade is %c",grade);
    printf("\nYour gpa is %f", gpa);

    double d = 3.1231242353435;
    printf("\nlong float %0.15lf", d);

    bool e = true;
    printf("\n%d", e);

    char f = 100;
    printf("\n%c", f);

    unsigned char g = 255;
    printf("\n%d", g);

    unsigned int k = 412423234;
    printf("\n%u", k);

    const float PI = 3.14159;
    printf("\n%f", PI);

    char mane[25];
    printf("\nWhat is your name?");
    fgets(mane, 25, stdin);
    mane[strlen(mane)-1] = '\0';
    printf("You are %s, pangit", mane);

    return 0;
}