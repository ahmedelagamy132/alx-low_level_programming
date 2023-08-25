#include "main.h"
/**
 * _strcmp - fhdkndfjngdfgfd
 * @s1: dlfjgflkdjg
 * @s2: ndfjvndjfvndfvfd
 * Return: jdnljdnvljdnmfv
 */



int _strcmp(char *s1, char *s2)
{
int loop = 0, difference = 0;

for (; s1[loop] != '\0' && s2[loop] != '\0'; loop++)
{
if (s1[loop] != s2[loop])
{
difference = s1[loop] - s2[loop];
break;

}
}
return (difference);
}
