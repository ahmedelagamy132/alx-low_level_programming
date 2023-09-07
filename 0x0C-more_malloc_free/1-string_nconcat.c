#include <stdlib.h>
#include "main.h"

/**
*string_nconcat - dljgvhbdkjmvdfv
*
*@s1: dlkfbhndkgmbkdg;mb
*@s2: dgm.b,mgdb,gdbgf,b
*@n: fljbgkmfgkfbm fkbg,f
*
*Return:  fgnb lfkm kfm ,fc
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int tall, address;
char *word;
tall = n;
if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
address = 0;
while (s1[address])
{
tall++;
address++;
}
word = malloc(sizeof(char) * (1 + tall));

if (word == NULL)
{
return (NULL);
}
tall = 0;
address = 0;
while (s1[address])
{
word[tall] = s1[address];
tall++;
address++;
}
address = 0;
while (s2[address] && address < n)
{
word[tall++] = s2[address];
address++;
}
word[tall] = '\0';
return (word);
}
