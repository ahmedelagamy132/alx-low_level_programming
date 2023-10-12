#include "variadic_functions.h"

/**
  * sum_them_all - sum
  * @n: num
  *
  * Return: 0
  */
int sum_them_all(const unsigned int n, ...)
{
int tot = 0;
unsigned int loop = 0;
va_list ar;


if (n != 0)
{
va_start(ar, n);
tot = 0;
for (; loop < n; loop++)
	tot += va_arg(ar, int);

va_end(ar);
return (tot);
}

return (0);
}
