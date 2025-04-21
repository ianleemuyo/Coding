#include <stdio.h>
#include <string.h> 

int main()
{

    char A[80] = "CS";
    char B[80] = "PUP";

    strcpy(A,B);

    printf("%s\n", A);
    printf("%s\n", B);

    printf( "%s\n", strcat(A,B));

    return 0;
}