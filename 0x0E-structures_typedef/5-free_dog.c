#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - struct dog
 * @d: details
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);		
free(d);
}
}
