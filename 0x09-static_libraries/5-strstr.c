#include "main.h"

/**
 * _strstr - cdjvnlfxkmvc
 *
 * @haystack: xlfvjmxkfv
 *
 * @needle: xjvnx,ckmv,x
 *
 * Return:xc,vnxjcv,nkxc,v
 */
char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{
char *second = needle;
char *first = haystack;

/*increment to the two strings*/
while (*second != '\0' && *first == *second)
{

second++;
first++;


}

if (*second == '\0')
return (haystack);
haystack++;
}

return (0);
}


