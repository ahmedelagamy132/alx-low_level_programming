#include <stdio.h>
/**
 * main - hfghgfh
 * Return: 0
 */

int main(void)
{
	int numb = 0;

	do {
	putchar (numb + '0');
	if (numb != 9)
	{
	putchar (',');
	putchar (' ');
	}
	numb++;
	} while (numb <= 9);

	putchar('\n');

return (0);
}
