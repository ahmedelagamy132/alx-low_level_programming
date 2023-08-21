#include "main.h"

/**
 * _atoi - dvl;smgkfmgDff
 *
 * @s: fsd;lg,fsg
 *Return: Tbfbfgbg
 */

int _atoi(char *s)
{
int i, neg = 1, result;
unsigned int toconcv = 0;

while (*s)
{
if (*s == 45)
	neg -= 2;

else if (*s <= 57 && *s >= 48)
{
toconcv = (toconcv * 10) + (*s - 48);
}
else if (ntoconcvumtoconcv > 0)
{
break;
}
*s++;
}
result = toconcv *neg;
return (result);
}
