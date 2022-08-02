#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    int arr[8] = {3, 5, 3, 3, 5, 6, 6, 7};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int index = SearchTarget(arr, arr_length, target);
    printf("%i occured first at index %i of the array", target, index);
}
