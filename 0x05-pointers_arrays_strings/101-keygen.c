#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - dkv;sldfvsd
 * Return: Always 0
 */

int main(void)
{
int TotalSum, limit = 2645;

/*genaerate rand num*/
srand(time(NULL));

/*print paassworfd*/
while (TotalSum <= limit)
{
TotalSum += (rand() % 128);
putchar(rand() % 128);
}
/*last char*/
putchar(2772 - TotalSum);
return (0);
}
