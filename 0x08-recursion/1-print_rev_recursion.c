#include "main.h"

/**
 * void _print_rev_recursion - print string in rev
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s + 1);

	}
return;
}
