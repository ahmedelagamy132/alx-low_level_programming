#include "main.h"

/**
 * _strstr - fvkjhsnxlkvmxkc
 *
 * @haystack: svkdjn sdjmv
 *
 * @needle: vj,nsdvj,nsv
 *
 * Return: lsjf,vnsfj,vn
 */

char *_strstr(char *haystack, char *needle)
{
int loop1 = 0, loop2 = 0;
while (haystack[loop1] != '\0')
{
char *first = haystack;
char *secomd = needle;

while (first[loop2] == secomd[loop2] && secomd[loop2] != '\0')
{
loop2++;
}

if (secomd[loop2] == '\0')
{
return (haystack[loop1]);
}
loop1++;
}

return (0);
}


