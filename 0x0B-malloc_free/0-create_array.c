#include <stdlib.h>
#include "main.h"

/**
 * create_array - array
 * @size: size
 * @c: int
 *
 * Return: pointer
 */
 
char *create_array(unsigned int size, char c)
{
    int loop = 0;
	char *word;


if (size == 0)
{
return (NULL);
}
word = (char *)malloc(1 * size);
if (word == NULL)
{
return (NULL);
}
while (size > loop)
{
word[loop] = c;
i++;
}
return (array);
}
