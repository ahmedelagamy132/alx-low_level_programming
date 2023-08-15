#include "main.h"
/**
 * times_table - hfghfghfghgh
 */



void times_table(void)
{
int k = 0, j = 0;
while (k < 10)
{
while (j < 10)
{
int timees = k * j;
if ((timees / 10) != 0)
{
_putchar(',');
_putchar(' ');
_putchar((timees / 10) + '0');
_putchar((timees % 10) + '0');
}
else if (timees != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((timees % 10) + '0');
}
else
{
if (k == 0 && j != 9)
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('0');
}
}
j++;
}
j = 0;
k++;
_putchar('\n');
}
}
