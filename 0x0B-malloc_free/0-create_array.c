#include "main.h"

/**
 * create_array - bjkfbvdnfjn
 * @size: jfndv,jndfb
 * @c: hkfbdjvndfjbdf
 * Return: djfbndjbnv
 */
char *create_array(unsigned int size, char c)
{
char *arr1 = malloc(size);
if (size == 0)
{
return (0);
}
if (arr1 == 0)
{
return (0);
}
/*assigning*/
while (size)
{
size = size - 1;
arr1[size] = c;
}
return (arr1);
}
