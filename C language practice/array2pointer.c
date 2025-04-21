#include <stdio.h>

int main(){
    int A[3][3] = {8,2,5,7,1,2,4,3,6};
    int *p = &A[0][0];
    
    printf("%d\n", A[0][0]);
    printf("%d\n", *p);
    printf("%d\n", *A[0]);

    printf("%d\n", A[0][2]);
    printf("%d\n", *(p + 2));
    printf("%d\n", *((A[0] + 2)));
    printf("%d\n", *(*(A) + 2));

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", *p);
        }
    }
}