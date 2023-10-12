
#include "variadic_functions.h"

/**
  * print_numbers - nums
  * @separator: sep
  * @n: n
  *
  * Return: 0
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int loop = 0;

if (n > 0)
{
va_start(ar, n);
loop = 0;
for (; loop < n; loop++)
{
printf("%d", va_arg(ar, int));

if (loop != n - 1  && separator != NULL)
	printf("%s", separator);
}
va_end(ar);
}
printf("\n");
}
