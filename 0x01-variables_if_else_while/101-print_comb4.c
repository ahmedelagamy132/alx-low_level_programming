#include <stdio.h>
/**
 * main - hfghgfh
 * Return: 0
 */

int main(void)
{
	int numb = 0, i = 0, j = 0;

	while (i <= 9)
	{
	while (j <= 9)
	{
	do {
	if (i != numb && numb != j && j != i)
	{
	if (numb > i && j > i && numb > j)
	{
	putchar (i + '0');
	putchar (j + '0');
	putchar (numb + '0');
	if (i != 7)
	{
	putchar (',');
	putchar (' ');
	}
	}
	}
	numb++;
	} while (numb <= 9);
	j++;
	numb = 0;
	}
	j = 0;
	i++;
	}

	putchar('\n');
return (0);
}
