#include "main.h"

/**
* print_number - lijsdms,dm
* @n: sdvsdksdlsf
*
*/
void print_number(int n)
{
int numbeforelast, printed_int = n, last;
if (n < 0)
{
_putchar('-');
printed_int *= -1;
}
if (printed_int > 9)
{
numbeforelast = printed_int / 10;
/*recursion to print the before last dig.*/
print_number(numbeforelast);
}
last = printed_int % 10;
_putchar(last + (50 - 2));
}
