#include "main.h"

/**
 * get_bit - ...
 * @n: ...
 * @index: ...
 * Return: ...
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int loop;

if (index < 64 && n == 0)
{
return (0);
}
for (loop = 0; loop <= 63; n >>= 1, loop++)
{
if (index == loop)
{
return (n & 1);
}
}

return (-1);
}
