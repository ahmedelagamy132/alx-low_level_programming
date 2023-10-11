
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - function
 * @a: a
 * @b: b
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - 
 * @a: a
 * @b: b
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function 
 * @a: a
 * @b: b
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function
 * @a: a
 * @b: b
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function
 * @a: a
 * @b: b
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
