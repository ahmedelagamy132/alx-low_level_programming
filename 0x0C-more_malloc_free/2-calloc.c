#include <stdlib.h>
#include "main.h"


/**
  * _calloc - callocate memory
  * @nmemb: members num
  * @size: size
  *
  * Return: 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *word;
int loop1 = 0, num = 0;

if (nmemb == 0 || size == 0)
	return (NULL);

num = size * nmemb;
word = malloc(num);

if (word == NULL)
	return (NULL);

while (loop1 < num)
{
word[loop1] = 0;
loop1++;
}

return (word);
}
