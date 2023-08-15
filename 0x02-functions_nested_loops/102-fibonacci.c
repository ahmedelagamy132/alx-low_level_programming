#include <stdio.h>

/**
 * main - bbbjjjjsfd
 *
 * Return: Always 0
 */

int main(void)
{

long long num_to_be_added1 = 1, num_to_be_added2 = 2, added_mum;
added_mum = num_to_be_added1 + num_to_be_added2;



printf("%d, %d, ", num_to_be_added1, num_to_be_added2);


int increasing = 2;
while (increasing < 50)
{

if (increasing != 50)
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
