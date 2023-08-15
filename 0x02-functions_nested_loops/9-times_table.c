#include "main.h"
/**
 * times_table - mfg,dfgdfmlllvlld
 *
 */

void times_table(void)
{
int k = 0, j = 0;
while (k < 10)
{
while (j < 10)
{
/*print times table */
int timees = k * j;
_putchar(timees + '0');
_putchar(',');
_putchar(' ');
j++;
}
j = 0;
k++;
}

}
