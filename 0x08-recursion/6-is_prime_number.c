#include "main.h"

/**
 *findp - vkjdfnvkjfdvnfv
 *
 *@num1: dvfj,vnd,fvndfvdf
 *
 *@num2: kfvdjfnvldfkvjmdf
 *
 *Return: bdfkjvndf,vjndfv
 */

int findp(int num1, int num2)
{
if (num2 > (num1 - 1))
{
if (num1 >= 2)
{
return (1);
}
}
if (num1 < 2 || num1 % num2 == 0)
{
return (0);
}
else
{
return (findp(num1, ++num2));
}

}

/**
 *is_prime_number - fcsf,jdhnvkjfsdnvksmdc
 *
 *@n: vjdfn,df,mbldfmb kvx bv
 *
 *Return: kjdbndgjbn dbj nvxn
 */
int is_prime_number(int n)
{
return (findp(n, 2));
}
