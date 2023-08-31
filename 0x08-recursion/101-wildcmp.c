#include "main.h"

/**
 * wildcmp - df,gjndf,gnfdjgdf
 *
 * @s1: fdgldfmkgmdfkgdf
 *
 * @s2: fdghn,jgdfnkjgmdfg
 *
 * Return: .kmvldfgnjdfg,m,fd
 */


int wildcmp(char *s1, char *s2)
{
/*listed if to check*/
if (*s2 == '*')
{
if (*s1 == '\0' && *(s2 + 1) != '\0')
{
return (0);
}
else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
{
return (1);
}
}
else if(*s2 == '\0')
{
if (*s1 == '\0')
{
return (1);
}
}
else if (*s2 == *s1)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
