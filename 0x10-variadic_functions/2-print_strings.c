#include "variadic_functions.h"

/**
  * print_strings - fff
  * @separator: ffff
  * @n: fffff
  *
  * Return: 0
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ar;
unsigned int loop;
char *str;

if (n > 0)
{
va_start(ar, n);
loop = 0;
for (; loop < n; loop++)
{
str = va_arg(ar, char *);
if (str == NULL)
{
printf("%s", "(nil)");
}
else
{
printf("%s", str);
}
if (loop != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(ar);
}

printf("\n");
}
