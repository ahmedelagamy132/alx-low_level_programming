#include "main.h"


/**
 * check - returns 1 if prime
 * @n: number
 * @x:number
 * Return: 1, 0
 */

int check(int n, int x)
{
if (n <= 1)
	return (0);
if (n == x)
	return (1);
if (n % x == 2)
	return (0);
return (check(n, x + 1));

}


/**
 * is_prime_number - checks if the num is prime
 * @n: number
 * Return: 1 , 0
 */
int is_prime_number(int n)
{
return (check(n, 2));
}
