#include "main.h"
/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned int loop;

for (loop = 0; m || n; n >>= 1, m >>= 1)
{

if ((n & 1) != (m & 1))

loop++;

}


return (loop);
}
