#include "variadic_functions.h"


/**
 * print_all - prrrr
 * @format: format
 */
void print_all(const char * const format, ...)
{
int loop;
char *word, *fas = "";

va_list tup;

va_start(tup, format);
loop = 0;
if (format)
{
while (format[loop])
{
switch (format[loop])
{
case 'f':
	printf("%s%f", fas, va_arg(tup, double));
	break;
case 'c':
	printf("%s%c", fas, va_arg(tup, int));
	break;
case 'i':
	printf("%s%d", fas, va_arg(tup, int));
	break;

case 's':
	word = va_arg(tup, char *);
	if (!word)
		word = "(nil)";
	printf("%s%s", fas, word);
	break;
default:
	loop++;
	continue;
}
fas = ", ";
loop++;
}
}

printf("\n");
va_end(tup);
}

