#include <stdio.h>

/**
 * main - bbbjjjjsfd
 *
 * Return: Always 0
 */

int main(void)
{

long num_to_be_added1 = 1, num_to_be_added2 = 2, added_mum, increasing = 2;
added_mum = num_to_be_added1 + num_to_be_added2;



printf("%ld, %ld, ", num_to_be_added1, num_to_be_added2);


while (increasing < 50)
{

if (increasing != 49)
{
printf("%ld, ", added_mum);
}

else
{
printf("%ld", added_mum);
printf("\n");
}
increasing++;
num_to_be_added1 = num_to_be_added2;
num_to_be_added2 = added_mum;
added_mum = num_to_be_added1 + num_to_be_added2;
}

return (0);
}
