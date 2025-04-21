#include <stdio.h>

int main(){

    int a,b,sum;
    char ans;

    do{
        printf("Enter two positive integers:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        sum = a+b;
        printf("The sum is %d\n", sum);
            printf("Try again?y/n\n");
            scanf("\n%c",&ans);
    } while(ans=='y'||ans=='Y');
    
    return 0;    

}