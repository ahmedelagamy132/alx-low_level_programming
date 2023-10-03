#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer
 * @str: string
 * Return: string
 */
 
char *_strdup(char *str)
{
char *b;
int loop = 0, tall;

if (str == NULL)
{
return (NULL);
}
tall = 0;
while (str[tall] != '\0')
{
tall++;
}
b = (char *)malloc(1 * tall) + 1);
if (b == NULL)
{
return (NULL);
}
while (loop < tall)
{
b[loop] = str[loop];
}
b[tall] = '\0';

return (b);
}
