#include <stdlib.h>
#include <stdio.h>

/**
 * main - product
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int total = 0, first, second;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
first = atoi(argv[1]);
second = atoi(argv[2]);
total = first * second;
printf("%d\n",total);
}
return (0);
}
