#include<stdio.h>

/**
 * print_array - kjgdfjgnldkmb
 *
 * @a: dfkgnfdlkmdgd
 *
 * @n: dfljnbm;fdmlbvdx
 */

void print_array(int *a, int n)
{
int iteration;

iteration = 0;
while (iteration < n)
{
/*last element*/
if ((iteration + 1) == n)
{
printf("%d", a[iteration]);
}
else
{
/*else elements*/
printf("%d, ", a[iteration]);
}
iteration++;
}
printf("\n");
}
