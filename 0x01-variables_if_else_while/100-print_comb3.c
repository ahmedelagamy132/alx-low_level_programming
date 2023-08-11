#include <stdio.h>
/**
 * main - hfghgfh
 * Return: 0
 */

int main(void)
{
	int numb = 0, i = 0;

	while (i <= 9)
	{
	do {
	if (i != numb)
	{
	if (numb > i)
	{
	putchar (i + '0');
	putchar (numb + '0');
	if (i != 8)
	{
	putchar (',');
	putchar (' ');
	}
	}
	}
	numb++;
	} while (numb <= 9);
	i++;
	numb = 0;
	}


	putchar('\n');

return (0);
}
