#include "main.h"

/**
 * _atoi - jkgnfb.kfmv
 *
 * @s: fdmnmdfv .df/v
 *
 *Return: dbmfmldmf/v
 */

int _atoi(char *s)
{
/*+ve only*/
unsigned int digits = 0;
int answer, neg = 1;

while (*s)
{
/*change t o-ve*/
if (*s == 45)
	neg = -neg;
/*gets the num*/
else if (*s <= 57 && *s >= 48)
{
digits = (digits * 10) + (*s - 48);
}
/*break*/
else if (digits > 0)
{
break;
}
s++;
}
answer = digits *neg;
	return (answer);
}
