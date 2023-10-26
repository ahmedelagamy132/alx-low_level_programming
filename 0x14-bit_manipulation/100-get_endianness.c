#include "main.h"
/**
 * get_endianness - ...
 * Return: ...
 */

int get_endianness(void)
{
char *word;
unsigned int num;

num = 1;

word = (char *) &num;

return ((int)*word);
}
