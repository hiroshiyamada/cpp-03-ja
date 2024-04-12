#include "double_array.h"
#include <stdio.h>

void double_array(int *arr, size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        printf("%d ", arr[i] * 2);
    }
    printf("\n");
}