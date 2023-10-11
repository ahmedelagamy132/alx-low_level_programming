#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - index
 * @array: array
 * @size: size
 * @cmp: func pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int loop = 0;

if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

for (loop = 0; loop < size; loop++)
{
if (cmp(array[loop]) != 0)
	return (loop);
}
return (-1);
}
