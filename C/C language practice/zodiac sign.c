#include <stdio.h>

int main() {
    int month, day;
    char name[50]; 

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%49s", name); 

    printf("Enter your birth month (1-12): ");
    scanf("%d", &month);
    printf("Enter your birth day (1-31): ");
    scanf("%d", &day);

    if (month == 1) {
        if (day <= 19) {
            printf("Hello %s, your zodiac sign is Capricorn.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Aquarius.\n", name);
        }
    } else if (month == 2) {
        if (day <= 18) {
            printf("Hello %s, your zodiac sign is Aquarius.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Pisces.\n", name);
        }
    } else if (month == 3) {
        if (day <= 20) {
            printf("Hello %s, your zodiac sign is Pisces.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Aries.\n", name);
        }
    } else if (month == 4) {
        if (day <= 19) {
            printf("Hello %s, your zodiac sign is Aries.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Taurus.\n", name);
        }
    } else if (month == 5) {
        if (day <= 20) {
            printf("Hello %s, your zodiac sign is Taurus.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Gemini.\n", name);
        }
    } else if (month == 6) {
        if (day <= 20) {
            printf("Hello %s, your zodiac sign is Gemini.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Cancer.\n", name);
        }
    } else if (month == 7) {
        if (day <= 22) {
            printf("Hello %s, your zodiac sign is Cancer.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Leo.\n", name);
        }
    } else if (month == 8) {
        if (day <= 22) {
            printf("Hello %s, your zodiac sign is Leo.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Virgo.\n", name);
        }
    } else if (month == 9) {
        if (day <= 22) {
            printf("Hello %s, your zodiac sign is Virgo.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Libra.\n", name);
        }
    } else if (month == 10) {
        if (day <= 22) {
            printf("Hello %s, your zodiac sign is Libra.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Scorpio.\n", name);
        }
    } else if (month == 11) {
        if (day <= 21) {
            printf("Hello %s, your zodiac sign is Scorpio.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Sagittarius.\n", name);
        }
    } else if (month == 12) {
        if (day <= 21) {
            printf("Hello %s, your zodiac sign is Sagittarius.\n", name);
        } else {
            printf("Hello %s, your zodiac sign is Capricorn.\n", name);
        }
    } else {
        printf("Invalid month entered, %s. Please enter a valid date.\n", name);
    }

    return 0;
}
