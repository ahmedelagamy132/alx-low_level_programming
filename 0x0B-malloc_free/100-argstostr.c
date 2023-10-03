#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * *argstostr - arguments concatenated
 * @ac: count
 * @av: pointer
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
char *word;
int loop1 = 0, loop2 = 0, num = 0, cap = 0;

if (ac == 0)
{
return (NULL);
}
if (av == NULL)
{
return (NULL);
}

while (loop1 < ac)
{
while (av[loop1][loop2] != '\0')
{
loop2++;
}
loop2 = 0;
cap += loop2 + 1; 
loop1++;
}
word = malloc(cap + 1);
if (word == 0)
{
return (NULL);
}
num = 0;
loop1 = 0;
loop2 = 0;
while (loop1 < ac)
{
while (av[loop1][loop2] != '\0')
{
word[num] = av[loop1][loop2];
num++;
loop2++;
}
loop2 = 0;
word[num] = '\n';
num++;
loop1++;
}
return (word);
}
