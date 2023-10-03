#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * leen - length
 * @str: string
 *
 * Return: length
 */
int leen(char *str)
{
int ind = 0, tall = 0;

while (*(str + ind) != ' ' && *(str + ind))
{
tall++;
ind++;
}
return (tall);
}

/**
 * words - no of words
 * @str: str
 *
 * Return: dd
 */
int words(char *str)
{
int ind = 0, sen = 0, tall = 0;
for (ind = 0; *(str + ind); ind++)
	tall++;
for (ind = 0; ind < tall; ind++)
{
if (*(str + ind) != ' ')
{
sen++;
ind += leen(str + ind);
}
}
return (sen);
}

/**
 * **strtow - str to words
 * @str: str
 * Return: pointer
 */
char **strtow(char *str)
{
int loop, loop2, num, count = 0, len = 0, cword = 0;
char **word;
if (str == NULL || *str == '\0')
	return (NULL);
count = words(str);
if (count == 0)
	return (NULL);
word = malloc(sizeof(char *) * (count + 1));
if (word == NULL)
	return (NULL);

for (loop = 0, loop2 = loop; cword < count; loop++, len = 0, loop2 = loop)
{
if (*(str + loop) == ' ')
	continue;
while (*(str + loop2) != ' ' && *(str + loop2++))
{
len++;
}
word[cword] = malloc(sizeof(char) * len + 1);
if (!word[cword])
{
while (cword-- >= 0)
	free(word[cword]);
free(word);
return (NULL);
}
num = 0;
while (loop < loop2)
{
word[cword][num] = *(str + loop);
num++;
loop++;
}
word[cword++][num] = '\0';
}
word[count] = NULL;
return (word);
}
