#include <stdlib.h>
#include <stdio.h>

/**
 * main -  name
 *@argc: argc
 *@argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int loop1 = 0, loop2 = 0, total = 0;

if (argc < 2)
{
printf("0\n");
}
else
{
loop1 = 1;
while (loop1 < argc)
{
for (loop2 = 0; argv[loop1][loop2] != '\0'; loop2++)
{
if (argv[loop1][loop2] > '9' || argv[loop1][loop2] < '0')
{
printf("Error\n");
return (1);
}
}
total += atoi(argv[loop1]);
loop1++;
}
printf("%d", total);
printf("\n");
}
return (0);
}
