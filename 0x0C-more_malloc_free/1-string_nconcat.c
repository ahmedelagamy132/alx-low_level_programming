#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *len - getslength
 * @s: str
 * Return: length
 */

int len(char *s)
{
int length;
for (length = 0; *s; length++)
	s++;
return (length);
}

/**
 * string_nconcat - string concatenate
 * @s1: str
 * @s2: str
 * @n: len
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int loop1 = 0, loop2 = 0, len1, len2;
char *word;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = len(s1);
len2 = len(s2);

n = (n >= len2) ? len2 : n;
word = malloc((len1 + n) * 1 + 1);
if (!word)
	return (NULL);

while (loop1 < len1)
{
word[loop1] = s1[loop1];
loop1++;
}
while (loop2 < n)
{
word[loop1] = s2[loop2];
loop1++;
loop2++;
}
word[loop1] = '\0';
return (word);
}
