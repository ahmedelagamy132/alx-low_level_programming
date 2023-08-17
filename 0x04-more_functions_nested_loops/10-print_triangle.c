#include "main.h"

/**
 * print_triangle - asldsa;ldksad
 *
 * @size: svnsvndfsf
 */

void print_triangle(int size)
{
int loop1, loop2, loop3;
/*loopt to colledct them*/
for (loop1 = 1; loop1 <= size; loop1++)
{
/*loop for the spaces*/
for (loop2 = 0; loop2 < (size - loop1); loop2++)
{
_putchar(' ');
}
/*loop for the */
for (loop3 = 0; loop3 < loop1; loop3++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
