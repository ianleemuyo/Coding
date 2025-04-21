#include <stdio.h>
#define rows 3
#define cols 3

void DiagonalSearch(int array[rows][cols])
{
     int choice;
     int target;
     int cols2;
     
     printf("Enter 1 for primary diagonal or 2 for secondary diagonal\n");
     scanf("d", &choice);
     
     cols2 = (choice == 1) ? cols : (cols - i - 1);
     
     
     
     
     
     
     
}

int main()
{
    int array[rows][cols];
    
    printf("Input value of the elements ing the array:\n");
    for(int i = 0; i < 3; i++){
          for(int j = 0; j < 3; j++){
                  printf("Element[%d][%d]: ", i, j);
                  scanf("%d", &array[i][j]);
                }
          }
          
    printf("The Array:\n");
    for(int i = 0; i < 3; i++){
          for(int j = 0; j < 3; j++){
                  printf("%d\t", array[i][j]);
                }
                printf("\n");
          }
          
    DiagonalSearch(array);
    
    getchar();
    getchar();
    
}
