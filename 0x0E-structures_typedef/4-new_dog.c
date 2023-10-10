#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - dog
 * @name: name
 * @age: age
 **
 * @owner: owner
 * Return: ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
int loop1 = 0, loop2 = 0, loop3 = 0;
ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
else
{
while (name[loop1])
	loop1++;
while (owner[loop2])
{
loop2++;
}
ptr->name = malloc(++loop1);
ptr->owner = malloc(++loop2);
if (ptr->name == NULL || ptr->owner == NULL)
{
free(ptr->name);
free(ptr->owner), free(ptr);
return (NULL);
}
while (loop3 < loop1)
{
ptr->name[loop3] = name[loop3];
loop3++;
}
ptr->name[loop3] = '\0';
loop3 = 0;
while (loop3 < loop2)
{
ptr->owner[loop3] = owner[loop3];
loop3++;
}
ptr->owner[loop3] = '\0';
ptr->age = age;
return (ptr);
}
}
