#include <stdio.h>

void diagonalSearch(int array[3][3],int target)
{
     int j;
     
     for(int i = 0; i < 3; i++){
             if(array[i][i] == target){
             printf("row %d column %d value: %d\n", i, i, array[i][i]);
             }
             j++;
           }
           if(j != 0){
                   printf("element not found\n");
                   }
          
     
}

int main()
{
    int array[3][3];
    int target;
    int choice;
    
    do {printf("Input the value of  the elements:\n");
    for(int i = 0; i < 3; i++){
          for(int j = 0; j < 3; j++){
                  printf("row %d column %d value: ", i, j);
                  scanf("%d", &array[i][j]);
                }
          }
    
    printf("input the number to search: ");
    scanf("%d", &target);
          
    diagonalSearch(array, target);
    
    printf("do you want to try again? enter 1 for yes\n");
    scanf("%d", &choice);
}   while(choice == 1);
    
    return 0;
    
    
}
