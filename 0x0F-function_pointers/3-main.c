#include "3-calc.h"
/**
 * main - main
 * @argc: c
 * @argv: v
 * Return: 0
 */
int main(int argc, char *argv[])
{
int loop1, loop2, tot;
int (*ptr)(int, int);

if (argc < 4 || argc > 4)
{
printf("Error\n");
exit(98);
}

loop2 = atoi(argv[3]);
loop1 = atoi(argv[1]);
ptr = get_op_func(argv[2]);
if (ptr == NULL)
{
printf("Error\n");
exit(99);
}
tot = ptr(loop1, loop2);
printf("%d\n", tot);
return (0);
}
