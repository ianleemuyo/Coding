#include <stdio.h>

void MaxValueSearch(int array[3][3])
{
     int MaxValue = array[0][0];
     int MaxRow = 0;
     int MaxColumn = 0;
     
     for(int i = 0; i < 3; i++){
           for(int j = 0; j < 3; j++){
                   if(MaxValue < array[i][j]){
                                  MaxValue = array[i][j];
                                  MaxRow = i;
                                  MaxColumn = j;
                                  }
                 }
           }
     printf("MaxValue: %d row %d column %d", MaxValue, MaxRow, MaxColumn);
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
            
    MaxValueSearch(array);
    
    getchar();
    getchar();
    
    }
