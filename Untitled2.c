#include <stdio.h>

void evenSearch(int array[3][3])
{
     for(int i = 0; i < 3; i++){
             for(int j = 0; j < 3; j++){
                      if(array[i][j] % 2 == 0){
                      printf("row[%d], column[%d], value: %d\n", i, j, array[i][j]);
                                     }
                      }
             }
}

int main()

{
    int array[3][3];
    
         for(int i = 0; i < 3; i++){
             for(int j = 0; j < 3; j++){
                     printf("row[%d], column[%d], value:\n", i, j);
                     scanf("%d", &array[i][j]);
                     }
             }
             
              
         for(int i = 0; i < 3; i++){
             for(int j = 0; j < 3; j++){
                     printf("%d\t", array[i][j]);
                     }
                     printf("\n");
             }
    
    printf("even numbers in the array\n");
    evenSearch(array);
    
    getchar();
    getchar();
    
    

    
    return 0;

}



