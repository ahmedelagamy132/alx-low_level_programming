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
	numb++;
	if (i != 8)
	{
		putchar (',');
		putchar (' ');
	}
	}
	}

	} while (numb <= 9);
	i++;
	}


	putchar('\n');

return (0);
}
