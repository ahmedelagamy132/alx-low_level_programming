#include "main.h"
/**
 * _pow_recursion - returns power of number
 * @x: base
 * @y: power
 * Return: powered number
 */


int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}
