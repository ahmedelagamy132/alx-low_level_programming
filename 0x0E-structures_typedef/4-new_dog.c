#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: dog
 * @age: age
 * @owner: owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
int loop1 = 0, loop2 = 0, loop3 = 0;

if (name == NULL || owner == NULL)
	return (NULL);

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
	return (NULL);

while (name[loop1])
	loop1++;
loop1++;
ptr->name = malloc(loop1 * 1);
if (ptr->name == NULL)
{
free(ptr);
return (NULL);
}
for (loop3 = 0; loop3 < loop1; loop3++)
	ptr->name[loop3] = name[loop3];
ptr->age = age;
loop2 = 0;
while (owner[loop2])
	loop2++;
loop2++;
ptr->owner = malloc(loop2 * 1);
if (ptr->owner == NULL)
{
free(ptr);
free(ptr->name);
return (NULL);
}
loop3 = 0;
while (loop3 < loop2)
{
ptr->owner[loop3] = owner[loop3];
loop3++;
}
return (ptr);
}
