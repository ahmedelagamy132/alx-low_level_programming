#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - hgfmvsdbvdslnc
 * @n: vd'fvd
 *
 *
 */

void print_to_98(int n)
{


if (n < 98)
{
while (n <= 98)
{
int up = n++;
printf("%d", up);
if (up != 98)
{
printf(", ");
}

}
}

else if (n > 98)
{
while (n >= 98)
{

int down = n--;
printf("%d", down);
if (down != 98)
{
printf(", ");
}
}
}
else
{
printf("%d ", 98 );
}
}
