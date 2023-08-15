#include <stdio.h>
#include "main.h"
/**
 * print_times_table-rrthrtgtrghrt
 * 
 * @n: ;fsokflsg
 */
void print_times_table(int n)
{
int loop1 = 0, loop2, timeees, l;
if (n <= 15 && n >= 0)
{
for (; loop1 <= n; loop1++)
{   
printf('0');
loop2 = 1;
for (; loop2 <= n; loop2++)
{
timeees = loop2 * loop1;
if((timeees / 100) != 0)
{
l =timeees / 10;
_putchar(',');
_putchar(' ');
_putchar((timeees /100) + '0');
_putchar((l%10) + '0');
_putchar((timeees % 10) + '0');
}
else if((timeees / 10) != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((timeees / 10) + '0');
_putchar((timeees % 10) + '0');
}
else
{  
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar((timeees % 10) + '0');
}

}
_putchar('\n');
}
}
}
