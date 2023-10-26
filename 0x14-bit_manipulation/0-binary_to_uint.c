#include "main.h"

/**
 * binary_to_uint - ...
 * @b: ...
 * Return: ...
 */

unsigned int binary_to_uint(const char *b)
{
int tall, hhh;
unsigned int n;
if (!b)
{
return (0);
}
n = 0;
tall = 0;
while (b[tall] != '\0')
{
tall++;
}
for (tall--, hhh = 1; tall >= 0; tall--, hhh *= 2)
{
if (b[tall] != '0' && b[tall] != '1')
{
return (0);
}

if (b[tall] & 1)
{
n += hhh;
}
}
return (n);
}
