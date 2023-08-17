#include "main.h"

/**
* print_number - lijsdms,dm
* @n: sdvsdksdlsf
*
*/
void print_number(int n)
{

int num_p = n;
if (num_p < 0)
{
num_p *= -1;
putchar('-');
}
/*if zero it will not print*/
if (num_p / 10)
{
/*recursion to print before last1*/
print(num_p / 10);
}
/*print last*/
_putchar(num_p % 10 + '0');


}
