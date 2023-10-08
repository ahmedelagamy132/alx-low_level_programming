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
char *ptrr;
unsigned int loop = 0;

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
ptrr = malloc(new_size);

if (ptrr == NULL)
	return (NULL);

return (ptrr);
}

ptrr = malloc(new_size);

if (ptrr == NULL)
	return (NULL);

while (loop < old_size && loop < new_size)
{
ptrr[loop] = ((char *) ptr)[loop];
loop++;
}

free(ptr);
return (ptrr);
}
