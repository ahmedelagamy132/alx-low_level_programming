#include "main.h"

/**
 * more_numbers - dgdrfgfgrdf
 */

void more_numbers(void)
{
int loop11, loop22, fir, sec;
loop11 = 1;
/*loop for 10 times*/
for (; loop11 <= 10; loop11++)
{
loop22 = 0;
/*loop to print the 15 numbers*/
for (; loop22 < 15; loop22++)
{
fir = loop22 / 10;
sec = loop22 % 10;
if (loop22 >= 10)
{
_putchar(fir + 48);
}
_putchar(sec + 48);

}
_putchar('\n');
}
}
