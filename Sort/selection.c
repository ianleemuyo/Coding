#include <stdio.h>
#include <stdlib.h>

void sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++){
			int min = i;
			for(int j = i + 1; j < size; j++){
				if(array[min] > array[j]){
					min = j;
				}
		    }
		
			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
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

	printf("Given array: \n");
    printArray(array, size);

	printf("\nSorted array: \n");
    sort(array, size);
    printArray(array,size);
	
return 0;
}