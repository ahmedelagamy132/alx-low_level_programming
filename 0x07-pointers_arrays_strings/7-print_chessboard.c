#include "main.h"

/**
 * print_chessboard - ajdchnldkvmcx
 *
 * @a: x cljvnkxcmxc
 *
 * Return: xckvj,nxkvxkmc
 */
void print_chessboard(char (*a)[8])
{

int loop1 = 0, loop2 = 0;
while (loop1 < 8)
{
/*getting the location*/
while (loop2 < 8)
{
_putchar(a[loop1][loop2]);

/*_putchar('\n');*/

loop2++;
}
_putchar('\n');
loop2 = 0;
loop1++;
}
}

