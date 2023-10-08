#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
  * _realloc - realloc
  * @ptr: ptr
  * @old_size: osize
  * @new_size: nsize
  *
  * Return: 0
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

if (new_size == old_size)
	return (ptr);


if (ptr != NULL)
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
else
{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (nptr);
}
