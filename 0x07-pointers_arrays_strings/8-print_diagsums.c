#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - jfnkjdn,jnsdfmsd
 *
 * @a: ds.kfnsldk
 *
 * @size: skdjfnskdjmf
 *
 * Return:sjdfnlsdkfm
 */

void print_diagsums(int *a, int size)
{
int total = 0, total2 = 0, loop = 0, hfbd;

while (loop < size)
{
total += a[(loop * size) + loop];

loop++;
}

loop = size - 1;
/*loop to find the totatl 2*/
while (loop >= 0)
{
hfbd = (size - 1 - loop);
total2 = total2 + a[loop *size + hfbd];

loop--;
}
printf("%d, %d\n", total, total2);
}

