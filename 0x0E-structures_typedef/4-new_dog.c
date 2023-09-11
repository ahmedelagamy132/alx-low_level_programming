#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - generate new dog
 * @age: age
 * @owner: dog owner
 * @name: dog name
 *
 *
 * Return: generated dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *buddy;
int len1, len2, loop = 0, loop2 = 0;;

buddy = malloc(sizeof(dog_t));
if (buddy == NULL)
	return(NULL);
len1 = strlen(name);
len2 = strlen(owner);

buddy->name = malloc(sizeof(buddy->name) * len1);
if (buddy->name == NULL)
{
free(buddy);
return(NULL);
}
while (loop < len1)
{
buddy->name[loop] = name[loop];
loop++;
}
buddy->owner = malloc(sizeof(buddy->owner) * len2);
if (buddy->owner == NULL)
{
free(buddy->name);
free(buddy);
return(NULL);
}
while (loop2 < len2)
{
buddy->owner[loop2] = owner[loop2];
loop2++;
}
buddy->age = age;
return (buddy);
}
