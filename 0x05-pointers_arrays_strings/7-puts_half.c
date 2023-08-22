#include "main.h"

/**
 * puts_half - lknblkgbm;lcbv
 *
 * @str: lmbklcmvmkg
 */

void puts_half(char *str)
{
int elementsnum = 0;
while (str[elementsnum] != '\0')
{
elementsnum++;
}
/*inc for the int*/

elementsnum = elementsnum / 2;
while (str[elementsnum + 1] != '\0')
{
_putchar(str[elementsnum + 1]);
elementsnum++;
}
_putchar('\n');
}
