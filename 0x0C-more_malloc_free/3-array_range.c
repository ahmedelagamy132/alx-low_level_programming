#include <stdlib.h>
#include "main.h"

/**
* array_range - dfnv d,n .kdv mc
*
* @min: cvjl n,cvnm kcv
* @max: cvknc.kvccvi
*
* Return: cv k,cn lxkvn xv xc,mv c
*/

int *array_range(int min, int max)
{
int *word, loop1 = 0, loop2 = 0;

if (max < min)
{
return (NULL);
}
word = malloc(sizeof(*word) * (1 + (max - min)));

if (word != NULL)
{d
loop1 = min;
while (loop1 <= max)
{
word[loop2] = loop1;
loop2++;
loop1++;
}
return (block);
}
else
{
return (NULL);
}
}
