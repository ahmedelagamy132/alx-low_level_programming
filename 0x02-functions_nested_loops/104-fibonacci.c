#include <stdio.h>
/**
 * main - jfnd,nfldkfm
 * Return: 0
 */

int main(void)
{
unsigned long i, total, num2 = 2;
unsigned long num1_1, num1_2, num2_1, num2_2, total1, total2, num1 = 1;
printf("%ld, %ld, ", num1, num2);
/*loop 9g times*/
for (i = 0; i < 96; i++)
{
if (i < 90)
{
total = num1 + num2;
printf("%lu, ", total);
num1 = num2, num2 = total;
}
else
{
if (i == 90)
{
num1_1 = num1 / 10000000000, num1_2 = num1 % 10000000000;
num2_1 = num2 / 10000000000, num2_2 = num2 % 10000000000;
}
total1 = num1_1 + num2_1;
total2 = num2_2 + num1_2;
/*checks if the second part of number is very large*/
if ((num2_2 + num1_2) > 99999999999)
{
total2 = total2 % 10000000000;
total1 = total1 + 1;
}
if (i == 95)
{
printf("%lu%lu\n", total1, total2);
}
else
{
printf("%lu%lu, ", total1, total2);
}
num1_1 = num2_1, num1_2 = num2_2, num2_1 = total1, num2_2 = total2;
}
}
return (0);
}
