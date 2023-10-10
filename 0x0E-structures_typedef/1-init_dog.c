#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init variable dog
 * @d: detail
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->owner = owner;
d->name = name;
d->age = age;
}
return;
}
