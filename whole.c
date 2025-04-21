#include <stdio.h>

int valueCheck(){
 int x, test;
 do{
     test = scanf("%d",&x);
     
     if(test!=1){
     printf("Error! Enter a Number: ");
     while(getchar()!='\n');
     }
     }while(test!=1);   
return x;
}

int againCheck(){
 int x;
 char c;
 do{
     
     if(scanf("%d",&x)!=1){
     printf("Error! Try again? 1-Yes/0-No: ");
     while((c=getchar())!='\n'&&c!=EOF);
     } else if( x!= 1 && x!=0){
            printf("Error! Try again? 1-Yes/0-No: ");
            while(getchar()!='\n');
            }
     }while(x!=1 && x!= 0);   
return x;
}

void diagonalSearch(int array[3][3], int dv){
     int i,j;
    for( i=0;i<3;i++){
             if (array[i][i]== dv){
                             printf("Element found at Row: %d, Column: %d.\n",i,j);
                             return;
         }
    }        
    printf("Element not found on the diagonal.\n");
}

void maximumSearch(int array[3][3]){
     int i,j;
     int max = array[0][0];
     int maxRow, maxCol;
     
    for( i=0;i<3;i++){
         for(j=0;j<3;j++){
             if (array[i][j]>max){
                max = array[i][j];
                maxRow = i;
                maxCol = j;
             }
         
         }
    }        
    printf("Maximum element at Row: %d, Column: %d - %d.\n", maxRow,maxCol,max);
}

void div3Search(int array[3][3]){
     int i,j;
     int div = array[0][0];
     int row, col;
     
    for( i=0;i<3;i++){
         for(j=0;j<3;j++){
             if (array[i][j]%3==0){
                div = array[i][j];
                row = i;
                col = j;
                printf("Value: %d, Row:  %d, Column: %d\n", div, row,col);
             }
         
         }
    }        
}

void evenSearch(int array[3][3]){
     int i,j;
     int even = array[0][0];
     int row, col;
     
    for( i=0;i<3;i++){
         for(j=0;j<3;j++){
             if (array[i][j]%2==0){
                even = array[i][j];
                row = i;
                col = j;
                printf("Value: %d, Row:  %d, Column: %d\n", even, row,col);
             }
         
         }
    }        
}

int main(){
 int arr[3][3];
 int again, again1;
 int i,j;
 int foundInArray = 0, foundInDiagonal = 0;
 int key;
 
 printf("Welcome to my program!\n");
 
 do{
    for( i=0;i<3;i++){
         for (j=0;j<3;j++){
             printf("Enter value for Row: %d Column: %d : ", i,j);
             arr[i][j] = valueCheck();
         }
    }
             
    for( i=0;i<3;i++){
         for (j=0;j<3;j++){
             printf("%d\t", arr[i][j]);
         }
         printf("\n");
    }
    
    /*printf("Enter value to be searched: ");
    key = valueCheck();*/
    
    diagonalSearch(arr, foundInDiagonal);             
                 
    printf("Would you like to try again? 1-Yes/0-No: ");
    again = againCheck();
    if (again == 0){
              printf("Do you want to exit the program? 1-Yes/0-No: ");
              again1 = againCheck();
              if (again1 == 1){
                         printf("Thank you for using my program!\n");
                         break;
                         } else {
                                again = 1;
                                }
              }
    
} while (again ==1);
 
 return 0;   
}
