#include "main.h"

/**
 * set_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int set_bit(unsigned long int *n, unsigned int index)
{

unsigned int loop;

if (index > 63)
{

return (-1);

}

m = 1 << index;

*n = (*n | m);


return (1);

}
