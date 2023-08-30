#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - hfvbnkdfjvnkfvnfcbcbjc
 *
 * @s: csmbvkhfvbkxjdfv
 */
void _print_rev_recursion(char *s)
{

if ('\0' < *s)
{
/*rec to go to last*/

_print_rev_recursion(s + 1);
_putchar(*s);


}
return;
}
