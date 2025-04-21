#include <stdio.h>

void DiagonalSearch(int array[3][3])
{
     int j = 0;
     int target;
     printf("what do you want to search for? input numnber: \n");
     scanf("%d", &target);
     
     for(int i = 0; i < 3; i++){
           if(array[i][i] == target)
           {              printf("row %d column %d value: %d\n", i, i, array[i][i]);
                          j++;
                          }
           }
     if(j == 0){
                printf("element not found!\n");}
     
     
     }
     
int main()
{
    int array[3][3];
    
    
    printf("input the elements in the array:\n");
    for(int i = 0; i < 3; i++)
    {       for(int j = 0; j < 3; j++)
            {     printf("row %d column %d value:", i, j);
                  scanf("%d", &array[i][j]);  
                 }
            }
            
    DiagonalSearch(array);
    
    getchar();
    getchar();
    
    }
