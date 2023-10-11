#include <stdlib.h>
#include <stdio.h>

/**
 * main - uuu
 * @argc: c
 * @argv: v
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int loop = 0, no;
char *ptr = (char *) main;


if (argc != 2)
{
printf("Error\n");
exit(1);
}

no = atoi(argv[1]);

if (no < 0)
{
printf("Error\n");
exit(2);
}

while (loop < no)
{
printf("%02x", ptr[i] & 0xFF);
if (loop != no - 1)
	printf(" ");
loop++;	
}

printf("\n");
return (0);
}
