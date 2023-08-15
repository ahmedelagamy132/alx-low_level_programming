#include <stdio.h>


/**
 * main - lkadksjadks
 *
 * Return: 0
 */

int main(void)
{
int num = 0, sum = 0;
while (num < 1024)
{
if (((num % 3) == 0) || ((num % 5) == 0))
{
sum += num;
}

num++;
}
printf("%d\n", sum);

return (0);
}
