#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - vkhfbv j,fxnvjfv
 *
 * @width: vjfkvnjknvjcxv
 *
 * @height: vfjnvjfcnvdc
 *
 * Return: vfnbjfnvxmvc
 */
int **alloc_grid(int width, int height)
{
int loop1 = 0, loop2 = 0, **arr1;
if (height <= 0)
	return  (NULL);
if (width <= 0)
{
free(arr1);
return (NULL);
}
arr1 = malloc(sizeof(int *) * height);
if (arr1 == NULL)
{
free(arr1);
return (NULL);
}
else
{
while (loop1 < height)
{
arr1[loop1] = malloc(sizeof(int) * width);
if (arr1[loop1] == 0)
{
while (loop1)
{
loop1--;
free(arr1[loop1]);
}
free(arr1);
return (NULL);
}
loop2 = 0;
while (loop2 < width)
{
arr1[loop1][loop2] = 0;
loop2++;
}
loop1++;
}
return (arr1);
}
}
