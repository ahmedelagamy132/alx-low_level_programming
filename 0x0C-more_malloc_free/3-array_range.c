#include <stdlib.h>
#include "main.h"

/**
  * array_range - range
  * @min: min
  * @max: max
  * Return: int
  */

int *array_range(int min, int max)
{
int *word, loop = 0;

if (min > max)
	return (NULL);

word = malloc((sizeof(int) * (max - min)) + sizeof(int));

if (word == NULL)
	return (NULL);

while (; min <= max; min++)
{
word[loop] = min;
loop++;
}
return (word);
}
