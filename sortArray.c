#include <stdio.h>
#include <stdlib.h>
int SearchTarget(int array[], int len, int target);

int IndexOfMaxInRange(int array[], int length, int range)
{
    int i, max;
    max = array[range];
    for (i = range; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return SearchTarget(array, length, max);
}

int SearchTarget(int array[], int len, int target)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void SwapElement(int array[], int index0, int index1)
{
    int id_x = array[index0];
    int id_y = array[index1];
    array[index0] = id_y;
    array[index1] = id_x;
}

void PrintArray(int array[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
}

void SortArray(int array[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        int max_index = IndexOfMaxInRange(array, length, i);
        SwapElement(array, max_index, i);
    }
}

int main(void)
{
    int arr[10] = {12, 8, 4, 9, 11, 90, 4, 64, 23, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    PrintArray(arr, length);
    printf("\n");
    SortArray(arr, length);
    PrintArray(arr, length);
}
