#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name- prints name
 *@name: name
 *@f: fun
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
	return;
if (f == NULL)
	return;
(*f)(name);
}
