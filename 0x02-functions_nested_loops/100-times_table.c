#include <stdio.h>
#include "main.h"
/**
 *
 *  print_times_table - lnasjcasuuascsajcs
 *  
 * @n:   dvks;ldkfsd
 */
void print_times_table(int n)
{
int loop1, timeees, loop2;
/* listedddddddddddd loops */
if (n <= 15 && n >= 0)
{
for (loop1 = 0; loop1 <= n; loop1++)
{
_putchar(49 - 1);
for (loop2 = 1; loop2 <= n; loop2++)
{

_putchar(',');
_putchar(' ');

timeees = loop1 * loop2;

if (timeees < 10)
_putchar(' ');

if (timeees < 100)
_putchar(' ');

if (timeees > 99)
{
_putchar((timeees / 100) + 48);
_putchar(((timeees / 10)) % 10 + 48);
}
else if (timeees < 100 && timeees > 9)
{
_putchar((timeees / 10) + 48);
}
_putchar((timeees % 10) + 48);
}
_putchar('\n');
}
}
}
