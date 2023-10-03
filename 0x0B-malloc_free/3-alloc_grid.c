#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - pointer
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **word, loop1 = 0, loop2 = 0, tall;
tall = width * height;

if (len <= 0)
{
return (NULL);
}
word = (int **)malloc(height * sizeof(int *));
if (word == NULL)
{
return (NULL);
}
while (loop1 < height)
{
word[loop1] = (int *)malloc(width * sizeof(int));
if (word[loop1] == NULL)
{
for (loop1  - 1; loop1 >= 0; loop1--)
{
free(word[loop1]);
}
free(word);
return (NULL);
}
loop1++;
}
loop1 = 0;
while (loop1 < height)
{
loop2 = 0;
while (loop2 < width)
{
word[loop1][loop2] = 0;
loop2++;
}
loop1++;
}
return (word);
}
