#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - fgdn,jbndfjbndgfjbnkdvjndblkgj
 *
 * @argc: dljfgnkdfgmkdfgndfg
 *
 * @argv: dfgnfdgbnmfdkgbf
 *
 * Return: fd,jnbdf,jbndfg
 */
int main(int argc, char *argv[])
{
int low = 0;
if (argc != 2)
{
printf("Error");
printf("\n");
return (1);
}
else
{
int no_of_money[] = {25, 10, 5, 2, 1};
int amount = atoi(argv[1]), loop, AAlfloos;

loop = 0;
while (loop < 5)
{
if (amount >= no_of_money[loop])
{
AAlfloos = amount / no_of_money[loop];
low = AAlfloos + low;
amount %= no_of_money[loop];
if (amount % no_of_money[loop] != 0)
{
continue;
}
else
{
break;
}
}
loop++;
}
printf("%d\n", low);
return (0);
}
}
