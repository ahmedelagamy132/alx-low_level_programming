#include "main.h"

/**
 * *_strcpy - lknblkgbm;lcbv
 *
 * @dest: sdfjnsmd;lvmsovd
 *
 * @src: cskdjvnsfsvxc
 * Return: kjhfbskjvn
 */

char *_strcpy(char *dest, char *src)
{
int incr = 0;
/*loop to copy the str)*/
while (src[incr] != '\0')
{
dest[incr] = src[incr];
incr++;
}
/*end with \0*/
dest[incr] = '\0';
return (dest);
}
