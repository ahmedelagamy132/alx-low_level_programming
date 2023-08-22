#include "main.h"
#include <string.h>
/**
 * rev_string - lksjmlvkfmbx
 *
 * @s: vxlvmf;lxb,lvfc
 */

void rev_string(char *s)
{
char extra;
int howtall = 0, iter, last;

while (s[howtall] != '\0')
{
howtall++;
}

iter = 0
for (; iter < howtall / 2; iter++)
{
/* swapping */
last = howtall - 1;
extra = s[iter];
s[iter] = s[last - iter];
s[last - iter] = extra;
}
}
