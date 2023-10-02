#include <stdio.h>

/**
 * main - arguments
 * @argc: argc
 * @argv: argv
 *
 * Return:  0
 */
int main(int argc, char *argv[])
{
int loop = 0;

while (loop < argc)
{
printf("%s\n", argv[loop]);
loop++;
}
return (0);
}
