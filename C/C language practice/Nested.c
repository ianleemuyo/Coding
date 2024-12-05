#include <stdio.h>

int main () {

    int height, age, citizenship, recommendee;
    char name[25];

    printf("Enter your name:\n");
    scanf("%s", &name);
    printf("Are you recommended by Jedi Master Obi Wan?(input 1 for yes, input 0 for no)\n");
    scanf("%d", &recommendee);

if (recommendee == 1) 
        printf("You are ACCEPTED!");

else if (recommendee ==0) {
        printf("How tall are you?(in cm)\n");
        scanf("%d", &height);

        printf("How old are you?\n");
        scanf("%d", &age);

        printf("Are you a citizen of Endor? (input 1 for yes, 0 for no)\n");
        scanf("%d", &citizenship);
        
        if (height >= 200)
            if (21 >= age <= 25) 
                if (citizenship == 1)
                    printf("%s, You are ACCEPTED!\n", name);
                else printf("%s, You are REJECTED\n", name); 
            else printf("%s, You are REJECTED\n", name);
        else printf("%s, You are REJECTED\n", name); }

else printf("%s, You are REJECTED\n", name); 

return 0;

}