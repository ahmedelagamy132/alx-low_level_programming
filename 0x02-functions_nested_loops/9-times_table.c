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
/*print times table */
int check, timees = k * j;
if ((timees / 10) != 0)
{
_putchar((timees / 10) + '0');
_putchar((timees % 10) + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((timees % 10) + '0');
if (j != 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}


j++;
}
j = 0;
k++;
_putchar('\n');
}
}


