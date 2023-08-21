#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - dkv;sldfvsd
 * Return: Always 0
 */

int main(void)
{
char printedSum;
int TotalSum, limit = 2645;
/*genaerate rand num*/
srand(time(NULL));

/*print paassworfd*/
while (TotalSum <= limit)
{
printedSum = rand() % 128;
TotalSum = TotalSum + printedSum;
putchar(printedSum);
}
/*last char*/
putchar(2772 - TotalSum);
return (0);
}
