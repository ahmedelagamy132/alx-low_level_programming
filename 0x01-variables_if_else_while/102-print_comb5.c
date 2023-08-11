#include <stdio.h>
/**
 * main - hfghgfh
 * Return: 0
 */

int main(void)
{
	int unit1, unit2, ten1, ten2, k, l;
	/* listed loops*/
	for (k = 0; k < 100; k++)
	{
	l = k + 1;
	for (; l < 100; l++)
	{

	unit1 = k % 10;
	unit2 = l % 10;
	ten1 = k / 10;
	ten2 = l / 10;
	putchar(ten1 + '0');
	putchar(unit1 + '0');
	putchar(' ');
	putchar(ten2 + '0');
	putchar(unit2 + '0');

	if (k < 98)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
