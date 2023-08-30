#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - xc,vbxn,jmxk,vcxxc
 *
 *@s: bvkjfxnvlkmfdvfx
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
_puts_recursion(++s);
}
else
{
_putchar('\n');
}
}
