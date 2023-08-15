#include <stdio.h>

/**
 * main - bbbjjjjsfd
 *
 * Return: Always 0
 */

int main(void)
{

long numtobeadded1 = 1, numto_be_added2 = 2, added_mum, increasing = 2,sum = 3;
added_mum = numtobeadded1 + numto_be_added2;



printf("%ld, %ld, ", numtobeadded1, numto_be_added2);


while (added_mum < 4000000)
{


increasing++;
numtobeadded1 = numto_be_added2;
numto_be_added2 = added_mum;
added_mum = numtobeadded1 + numto_be_added2;

sum += added_mum;
}
printf("%ld\n", sum);
return (0);
}
