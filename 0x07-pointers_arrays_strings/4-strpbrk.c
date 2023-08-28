#include "main.h"

/**
 * _strpbrk - fs,jfnvkjfnvldfjdfv
 *
 *@s: dvkjbdnfv,dkmf ,/x
 *
 * @accept: dvkfbvhndf,vnlkc
 *
 * Return: czmxc vxcklmxlk
 */

char *_strpbrk(char *s, char *accept)
{
int loop1 = 0, loop2 = 0;

/*nested loop for searching for any sets of bytes*/

while (s[loop2] != '\0')
{
while (accept[loop1] != '\0')
{
/*if equal return*/
if (s[loop2] == accept[loop1])
{
return (&s[loop2]);
}
loop1++;
}
loop1 = 0;
loop2++;
}
return ('\0');
}
