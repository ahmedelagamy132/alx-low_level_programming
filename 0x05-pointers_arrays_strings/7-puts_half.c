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
elementsnum = elementsnum / 2;
while (str[elementsnum] != '\0')
{
putchar(str[elementsnum]);
elementsnum++;
}
}
