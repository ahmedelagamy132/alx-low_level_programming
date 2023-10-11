#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - array
 * @array: array
 * @size: size
 * @action: action
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int loop;

if (array == NULL || action == NULL)
	return;


for (loop = 0; loop < size; loop++)
	action(array[loop]);
}
