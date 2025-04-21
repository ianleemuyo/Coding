#include <stdio.h>

void MaxValueSearch(int array[3][3])
{    
     int MaxValue;
     int MaxRow;
     int MaxColumn;
     
     for(int i = 0; i < 3; i++){
             for(int j = 0; j < 3; j++){
                     if(MaxValue < array[i][j]){
                     MaxValue = array[i][j];
                     MaxRow = i;
                     MaxColumn = j;
                     }
                    }
              }
              printf("Row %d Column %d MaxValue: %d\n",MaxRow, MaxColumn, MaxValue);
        
}




int main()
{
    int array[3][3];
    int answer;
    
    do{
        for(int i = 0; i < 3; i++){
              for(int j = 0; j < 3; j++){
                      printf("row %d column %d value:", i, j);
                      scanf("%d", &array[i][j]);
                    }
              }
        printf("the array:\n");
        for(int i = 0; i < 3; i++){
              for(int j = 0; j < 3; j++){
                      printf("%d\t", array[i][j]);
                    }
                    printf("\n");
              }
        
        MaxValueSearch(array);
        
        
        
        
        printf("do you want to try again? enter 1 if yes: ");
        scanf("%d", &answer);
        }
    while (answer == 1);
    
    
    
    return 0;
}
