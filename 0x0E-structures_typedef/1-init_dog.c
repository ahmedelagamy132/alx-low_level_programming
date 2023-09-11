#include "dog.h"
#include <stdio.h>

/**
 * init_dog - enter info for the dog
 * @d: struct of the dog
 * @age: age
 * @owner: dog owner
 * @name: dog name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->age = age;
d->owner = owner;
d->name = name;
}

}
