#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - mmmm
  * @argc: c
  * @argv: v
  * Return: 0
  */
int main(int argc, char *argv[])
{
int n1, n2, tot;
int (*ptr)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

n1 = atoi(argv[1]),
n2 = atoi(argv[3]);

ptr = get_op_func(argv[2]);
if (ptr == NULL)
{
printf("Error\n");
exit(99);
}
tot = ptr(n1, n2);
printf("%d\n", tot);
return (0);
}
