#ifndef Ahmed
#define Ahmed
/**
 * struct dog - ddog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
