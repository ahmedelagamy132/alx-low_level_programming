#include <stdlib.h>
#include "main.h"

/**
* _realloc - bdbndfljkvndflkvndjb mv
*
* @ptr: sd,jfsdjvnsvkjdnsdvf
* @old_size: dsmvbfmhvbdfjvf
* @new_size: v,sdfnb,jdfnv.knmdfvf
*
* Return: vdjlfvk.dvmkldfnv,jdf
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int loop = 0;
char *word, *word2;
if (old_size == new_size)
{
return (ptr);
}
if (ptr && new_size == 0)
{
free(ptr);
return (NULL);
}
if (!ptr)
{
return (malloc(new_size));
}
word = malloc(new_size);
if (!word)
{
return (NULL);
}
word2 = ptr;
if (old_size > new_size)
{
while (new_size > loop)
{
word[loop] = word2[loop];
loop++;
}
}
if (old_size > new_size)
{
loop = 0;
while (old_size > loop)
{
word[loop] = word2[loop];
loop++;
}
}
free(ptr);
return (word);
}
