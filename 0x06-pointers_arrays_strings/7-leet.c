#include "main.h"
/**
 * leet - encode string
 * @n: string
 * Return: n
 */
char *leet(char *n)
{
char str1[] = "TeLtOAEloa";
	char str2[] = "7317043104";
	int loop1 = 0, loop2 = 0;



	while (n[loop1] != '\0')
	{
		while (loop2 < 10)
		{
			if (str1[loop2] == n[loop1])
			{
				n[loop1] = str2[loop2];
			}
loop2++;
		}
loop1++;
}
return (n);
}

