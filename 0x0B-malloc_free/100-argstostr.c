#include "main.h"
#include <stdlib.h>

/**
 * argstostr - afbdsjnvxknvcv
 *
 *@ac: fvdj,hvkdfjvc
 *
 *@av: xcvjhdfjvcm
 *
 * Return: djbvn ,jcv n,cjvb c
 */
char *argstostr(int ac, char **av)
{
char *arr1;
int loop1 = 0, loop2 = 0, loop3 = 0, length = 0, mal;
arr1 = NULL;
if (ac == 0)
	return (NULL);
if (av == NULL)
	return (NULL);
while (loop1 < ac)
{
while (av[loop1][loop2] != '\0')
{
length++;
loop2++;
}
loop2 = 0;
loop1++;
}
mal = length + ac + 1;
arr1 = malloc(sizeof(char) * mal);
if (arr1 == NULL)
{
return (NULL);
}
loop1 = 0;
loop2 = 0;
while (loop1 < ac)
{
while (av[loop1][loop2] != '\0')
{
arr1[loop3] = av[loop1][loop2];
loop3++;
loop2++;
}
arr1[loop3] = '\n';
loop3++;
loop1++;
loop2 = 0;
}
arr1[loop3] = '\0';
return (arr1);
}
