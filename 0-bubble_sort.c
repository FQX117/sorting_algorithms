#include "sort.h"
/*
 */void bubble_sort(int *array, size_t size)
{
size_t i, j, temp;
i = j = temp = 0;
if (size < 2)
return;
for (i = 0; i < size; i++)
{
for (j = 1; j < (size - i); j++)
{
if (array[j] < array[j - 1])
{
temp = array[j - 1];
array[j - 1] = array[j];
array[j] = temp;
print_array(array, size);
}
}
}
}
