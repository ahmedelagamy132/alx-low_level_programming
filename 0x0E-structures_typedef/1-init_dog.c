#include "dog.h"
/**
 * init_dog - dog
 * @d: pointerr
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->owner = owner;
d->name = name;
d->age = age;
}
