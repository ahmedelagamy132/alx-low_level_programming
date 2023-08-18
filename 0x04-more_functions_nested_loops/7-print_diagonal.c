#include "main.h"

/**
 * print_diagonal - dfgdfgdfhvbhrhf
 *
 * @n: fdgdfgdfgfdgf
 */

void print_diagonal(int n)
{
int spaces, slashes;

/*checks -ve or +ve*/
if (!(n > 0))
{
_putchar('\n');
}
else
{
slashes = 0;
/*loop for slashes and new lines*/
for (; slashes < n; slashes++)
{
spaces = 0;
/*loop for spaces*/
for (; spaces < slashes; spaces++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
