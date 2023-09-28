#include "main.h"

/**
 * getsqrt - gets root
 * @n: number
 * @x: number 2
 * Return: sqrt
 */
int getsqrt(int x, int n)
{
if (n *n == x)
	return (n);
if (n *n > x)
	return (-1);

return (getsqrt(x, n + 1));


}

/**
 * _sqrt_recursion - return sqrt of number
 * @n: number
 * Return: sruare root of number
 */
int _sqrt_recursion(int n)
{
return (getsqrt(n, 1));
}
