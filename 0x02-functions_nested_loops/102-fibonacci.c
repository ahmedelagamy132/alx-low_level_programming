#include <stdio.h>

/**
 * main - bbbjjjjsfd
 *
 * Return: Always 0
 */

int main(void)
{

long num_to_be_added1 = 1, num_to_be_added2 = 2, added_mum;
added_mum = num_to_be_added1 + num_to_be_added2;



printf("%ld, %ld, ", num_to_be_added1, num_to_be_added2);


int increasing = 2;
while (increasing < 100)
{

if (increasing != 100)
{
printf("%lli, ", added_mum);
}

else
{
printf("%lli ", added_mum);
printf("\n");
}
increasing++;
num_to_be_added1 = num_to_be_added2;
num_to_be_added2 = added_mum;
added_mum = num_to_be_added1 + num_to_be_added2;
}

return (0);
}
