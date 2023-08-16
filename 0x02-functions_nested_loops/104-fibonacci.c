#include <stdio.h>
/**
 * main - lnksann
 * Return: 0
 */


int main(void)
{
unsigned long first = 1, sec = 1, tot, number;


printf("%ld, ", first);

for (number = 3; number <= 98; number++)
{
tot = first + sec;
first = sec;
sec = tot;

printf("%ld, ", tot);
}

printf("\n");
return (0);
}
