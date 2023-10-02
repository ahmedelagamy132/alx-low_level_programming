#include <stdlib.h>
#include <stdio.h>

/**
 * main -  coins
 *@argc: argc
 *@argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int loop = 0, coins = 0;
int no[] = {25, 10, 5, 2, 1};
int felos = atoi(argv[1]);
while (loop < 5)
{
if (felos >= no[loop])
{
coins = coins + (felos / no[loop]);
felos %= no[loop];
if (felos % no[loop] == 0)
	break;


}
loop++;
}
printf("%d\n", coins);
}
return (0);
}
