
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main -dsjfhsdjfd
 * @argc: sdfsdfsdf
 * @argv: sdfdsfdsf
 * Return: sdfdsfsdfsdf
 */

int main(int argc, char *argv[])
{
int loop = 0, theTotal, loop2 = 0;

if (argc != 1)
{
if (argc >= 2)
{
	for (loop = 1; loop <= (argc - 1); loop++)
	{
		while (argv[loop][loop2] != '\0')
		{
			if (!isdigit(argv[loop][loop2]))
			{
				printf("Error\n");
				return (1);
			}
			loop2++;
		}
		theTotal = theTotal + atoi(argv[loop]);

	}
printf("%d\n", theTotal);
}
}
else
{

	printf("0\n");
}


return (0);

}
