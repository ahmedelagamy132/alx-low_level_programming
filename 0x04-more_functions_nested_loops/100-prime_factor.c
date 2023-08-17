#include <stdio.h>
/**
 * main - gsfgsf
 * Return: 0
 */
int main(void)
{

long largest_prime = 612852475143, largest, inc;

while (!(largest_prime % 2))
{
largest_prime = largest_prime / 2;
}
for (inc = 3; inc * inc <= largest_prime; inc = inc + 2)
{
if (!(largest_prime % inc))
{
largest_prime /= inc;
}
largest = largest_prime;
}
printf("%ld\n", largest);
return (0);
}
