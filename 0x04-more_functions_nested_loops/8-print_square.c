#include "main.h"


/**
 * print_square - xfvvvxfd
 *
 * @size: dfsmdfmskgf
 */
void print_square(int size)
{
int height = 0, width = 0;

if (!(size > 0))
{
_putchar('\n');
}
else
{
/*for loop for the height*/
height = 0;
for (; height < size; height++)
{
/*for loop for the width*/
width = 0;
for (; width < size; width++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
