#include "main.h"

/**
* print_number - lijsdms,dm
* @n: sdvsdksdlsf
*
*/
void print_number(int n)
{
int num_p = n;
if (n < 0)
{
num_p *= -1;
_putchar('-');
}
/*if zero it will not print*/
if (num_p / 10)
{
/*recursion to print before last1*/
print_number(num_p / 10);
}
/*print last*/
_putchar(num_p % 10 + '0');


}
