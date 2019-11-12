#include <stdio.h>
#include <stdlib.h>

int test(int array[], int size)
 {
  int i;
  for( i=0; i<size; i++)
   {
       printf("%d, ", array[i]);
   }

  printf("\n");
 }

int main(void)
{
    int array_size;
    int array1[] = {1, 2, 3, 5, 7, 9, 11};
    array_size = sizeof(array1)/sizeof(array1[0]);
    printf("Elements in original array are: ");
    test(array1, array_size);

    int size = 0;
    int length = array_size;
    int i = length - 1;
    while (i >= 0 && array1[i] != 5)
    i--;
    i++;
    size = length - i;
    int new_array[size];
    for (int j = 0; j < size; j++)

      {
          new_array[j] = array1[i + j];
      }

    array_size = sizeof(new_array)/sizeof(new_array[0]);
    printf("\nElements in new array are: ");
    test(new_array, array_size);
}

