#include <stdio.h>
/**
 * main - hfghgfh
 * Return: 0
 */

int main(void)
{
	int k = 0, l = 0, unit1, ten1, unit2, ten2;
	/* 1st loop */
	while (k <= 99)
	{
	/* 2nd loop */
	while (l <= 99)
	{
	/*condition that checks if the units is bigger than tens*/
	if (l > k)
	{
	unit1 = k % 10;
	unit2 = l % 10;
	ten1 = k / 10;
	ten2 = l / 10;

	putchar (ten1 + '0');
	putchar (unit1 + '0');
	putchar (' ');
	putchar (ten2 + '0');
	putchar (unit2 + '0');
	if (k != 98 || l < 99) 
	{
	putchar(',');
	putchar(' ');
	}
	}
	l++;
	}
	l = 0;
	k++;
	}
return (0);
}
