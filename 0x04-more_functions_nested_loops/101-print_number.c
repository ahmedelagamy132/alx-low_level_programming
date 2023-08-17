#include "main.h"

/**
* print_number - lijsdms,dm
* @n: sdvsdksdlsf
*
*/
void print_number(int n)
{
unsigned int num_p = n, blast;
if (n < 0)
{
num_p *= -1;
_putchar('-');
}
/*if zero it will not print*/
blast = num_p / 10;
if (blast)
{
/*recursion to print before last1*/
print_number(blast);
}
/*print last*/
_putchar(num_p % 10 + '0');


}
