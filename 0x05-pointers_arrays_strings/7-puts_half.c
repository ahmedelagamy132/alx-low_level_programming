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
elementsnum = elementsnum + 1;
while (str[elementsnum] != '\0')
{
_putchar(str[elementsnum]);
elementsnum++;
}
_putchar('\n');
}
