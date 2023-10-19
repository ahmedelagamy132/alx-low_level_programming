#include "lists.h"

/**
 * add_node - ...
 *@head: ...
 *@str: ...
 * Return: ...
 */

list_t *add_node(list_t **head, const char *str)
{
char *FFF;
int tall;
list_t *LL;

LL = malloc(sizeof(list_t));
if (LL == NULL)
{
return (NULL);
}
FFF = strdup(str);
if (FFF == NULL)
{
free(LL);
return (NULL);
}
for (tall = 0; str[tall];)
{
tall++;
}
LL->str = FFF;
LL->len = tall;
LL->next = *head;
*head = LL;
return (LL);
}
