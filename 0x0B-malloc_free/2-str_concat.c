#include "main.h"
#include <stdlib.h>
/**
 * str_concat - dfjb ndlkbdkflbvg
 * @s1: dvjnbkgdmkbg,vcv
 * @s2: dfhvbdfb
 * Return: dgljbndkbnjg
 */
char *str_concat(char *s1, char *s2)
{
char *arr1;
int size1 = 0, size2 = 0, loop = 0, loop2 = 0, mal;
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
mal = (size1 + size2) *sizeof(char);
arr1 = malloc(mal + 1);

if (arr1 == 0)
{
return (0);
}
while (loop <= (size1 + size2))
{
if (loop < size1)
{
arr1[loop] = s1[loop];
}
else
{
arr1[loop] = s2[loop2];
loop2++;
}
loop++;
}
m[loop] = '\0';
return (arr1);
}
