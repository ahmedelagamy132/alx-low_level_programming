#include "main.h"

/**
 * wildcmp - string compare
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0')
{
if (*s2 == '*')
	return (wildcmp(s1, s2 + 1));
}
if (*s2 == '\0')
	return (1);
else
	return (0);
}
if (*s1 == '\0' && *s2 == '\0')
{
	return (1);
}
if ('*' == *s2)
{
if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
	return (1);
}
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
