#include <stdio.h>
#include <stdlib.h>

void sort(int array[], int size)
{
   for(int i = 1; i < size; i++) {
			int temp = array[i];
			int j = i - 1;
			
			while(j >= 0 && array[j] > temp) {
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = temp;
		} 
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[] = {6,1,4,7,8,3,5,9,2,10};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array,size);
    

return 0;
}