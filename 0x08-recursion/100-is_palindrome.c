#include "main.h"


/**
 * getlength -fkbmkfbmv
 *
 * @strLength:xfbgxbfxv
 *
 * Return: sdjvnx,jnfxvm,
 */

int getlength(char *strLength)
{
if (*strLength != '\0')
{
strLength = strLength + 1;
return (getlength(strLength) + 1);
}
else if (*strLength == '\0')
{
return (0);
}
return (0);
}

/**
 * makesure - v,jvchnkj,fcnxm,
 *
 * @word:  jcvlnxc,vnlxckjvxklc,
 *
 * @num1: xvjchxjvxcjv
 *
 * @numlast: hgfhbcgv
 *
 * Return: xb,jxcnb,vmklxcm,
 */
int makesure(char *word, int num1, int numlast)
{
if (word[numlast] != word[num1])
{
return (0);
}
if (num1 < numlast + 1)
{
return (makesure(word, num1 + 1, numlast - 1));
}
else
{
return (1);
}
}

/**
 * is_palindrome - ascnzbsdjznskdcxm
 *
 * @s: x,jvnxckvmxvc
 *
 * Return: j,sdfnvkjx,ncc
 */
int is_palindrome(char *s)
{
int length = 0;
length = getlength(s);

if (length != 0)
{
return (makesure(s, 0, length - 1));
}
else if (length == 0)
{
return (1);
}
return (0);
}
