#include "main.h"
/**
 * print_times_table - lknlkvmsdmvadc
 * @n:snldfsnkdjsnfjsd
 */



void print_times_table(int n)
{
if (n < 15 && n > 0)
{
int k = 0, j = 0;
while (k <= n)
{
while (j <= n)
{
/*print times table */
int timees = k * j;
if ((timees / 10) != 0)
{
putchar(',');
putchar(' ');
putchar((timees / 10) + '0');
putchar((timees % 10) + '0');
}
else if (timees != 0)
{
printf(",  ");
putchar((timees % 10) + '0');
}
else
{
if (k == 0 && j != n)
{
printf("0,  ");
}
else
{
putchar('0');
}
}
j++;
}
j = 0;
k++;
putchar('\n');
}
}
}
}
