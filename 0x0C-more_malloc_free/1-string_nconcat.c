#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - fkjbhng,k,bm,gc
 *
 * @s1: cgkjbncgk.mngcb
 * @s2: cngjnkcg
 * @n: ck.gnmcgk.nmbv
 *
 * Return: kgh.vgmnk.vgnlvh
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int tall2 = 0, loop2 = 0, loop1 = 0, tall1 = 0;
char *word;

while (s2[tall2] && s2)
{
tall2 = tall2 + 1;
}

while (s1[tall1] && s1)
{
tall1 = tall1 + 1;
}

if (tall2 > n)
{
word = malloc(sizeof(char) * (n + 1 + tall1));
}
else
{
word = malloc(sizeof(char) * (1 + tall1 + tall2));
}
if (word)
{
return (NULL);
}
for (loop1 = 0; loop1 < tall1; loop1++)
{
word[loop1] = s1[loop1];
}

for (; n < tall2 && loop1 < (tall1 + n); loop1++, loop2++)
{
word[loop1] = s2[loop2];
}
for (; n >= tall2 && loop1 < (tall1 + tall2); loop1++, loop2++)
{
word[loop1] = s2[loop2];
}
word[loop1] = '\0';
return (word);
}
