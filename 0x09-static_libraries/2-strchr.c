#include "main.h"

/**
 *_strchr - jkbfdxmbvdfjnvkdfxvf
 *
 *@s: fdvdfkjndfxvklfmvdfv
 *
 *@c: fdvkbdfjnfdvjdfvdv
 *
 *Return: mhjgbj,m,vxcv
 */
char *_strchr(char *s, char c)
{
int lopp = 0;
char *location;
/*returning location*/
while (s[lopp] >= '\0')
{
location = s + lopp;
if (s[lopp] == c)
	return (location);


lopp++;
}
return ('\0');
}
