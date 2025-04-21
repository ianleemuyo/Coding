#include <stdio.h>

int main(){
do{
    int p;
    float A[5] = {2.1, 4, 6.12, 8, 10};
    float *p = &A[2];

    --p;
    printf("%x\n", p);
    printf("%x", p + 1);

}
while(p == 1);


}
