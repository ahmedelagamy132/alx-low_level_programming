#include "main.h"
/**
 * jack_bauer - ksfjmdvlkdsmklmdcmmm
 */
void jack_bauer(void)
{
int k = 0, j = 0, hour1, hour2, min1, min2;
/*listed_loooops*/
while (k < 24)
{
while (j < 60)
{
hour1 = k / 10;
hour2 = k % 10;
min1 = j / 10;
min2 = j % 10;
_putchar(hour1 + '0');
_putchar(hour2 + '0');
_putchar(':');
_putchar(min1 + '0');
_putchar(min2 + '0');
_putchar('\n');
j++;
}
j = 0;
k++;
}
}
