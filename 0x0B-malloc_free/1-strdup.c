#include <stdlib.h>
#include "main.h"

/**
 * _strdup - dfjb ndlkbdkflbvg
 * @str: dvjnbkgdmkbg,vcv
 * Return: dgljbndkbnjg
 */
char *_strdup(char *str)
{
int loop, amount, mall;
char *arr1;

if (str == NULL)
{
return (NULL);
}
amount = 0;
while (str[amount] != '\0')
{
amount++;
}
mall = amount *sizeof(*str) + 1;
arr1 = malloc(mall);

if (arr1 != 0)
{
while (loop < amount)
{
arr1[loop] = str[loop];
loop++;
}
}
else
{
return (NULL);
}
return (arr1);
}
