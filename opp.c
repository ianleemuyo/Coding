#include <stdio.h>

void choice2()
{
     int choice;
     int retry;
     
     do{
         printf("enter 1 for primary, enter 2 for secondary\n");
         retry =scanf("%d", &choice);
         
         if(retry != 1){
                  printf("invalid input, enter valid integer\n");
                  while(getchar() != '\n');
                  choice = -1;
                  }
         } while(choice != 1 && choice != 2);
}

int main(){
    choice2();}
