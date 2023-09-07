#include <stdlib.h>
#include "main.h"

/**
* _calloc - sfdvkjnfsvjnfdvjdfnb jdfv
*
*@nmemb: dfbk ndjb bdjvnck.n
*
*@size: cvj nck.v nckvm bcbv
*
*Return: cvlk jcv.k mckvmcv
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int loop = 0;
char *word;
if (nmemb == 0)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
word = malloc(size * nmemb);
if (word != NULL)
{
while ((size * nmemb) > loop)
{
word[loop] = 0;
loop++;
}
return (word);
}
else
{
return (NULL);
}
