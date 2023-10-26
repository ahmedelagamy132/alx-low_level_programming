#include "main.h"

/**
 * clear_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int loop;

if (index > 63)
{
return (-1);
}

loop = 1 << index;
if (*n & loop)
{
*n ^= loop;
}
return (1);
}
