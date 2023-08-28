#include "main.h"
/**
 * _strspn - dfkjgndfjkbndfknvcn
 *
 *@s: gblgnbjx vcb
 *
 *@accept: jgvhmfcvhb
 *
 * Return: jccjgvkbhlhbjuhb
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int loop1 = 0, loop2 = 0;

/*nested loops to ret num of bytes*/
while (s[loop1] != '\0')
{
while (accept[loop2] != s[loop1])
{
/*to check if the loop is finished*/
if (s[loop2] == '\0')
{
return (loop1);
}

}
loop1++;
loop2 = 0;

}
return (loop1);
}
