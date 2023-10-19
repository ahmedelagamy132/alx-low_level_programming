#include "lists.h"

/**
 * add_node - ...
 *@head: ...
 *@str: ...
 * Return: ...
 */

list_t *add_node(list_t **head, const char *str)
{
char *fff;
int len;
list_t *nnode;

nnode = malloc(sizeof(list_t));
if (fff == NULL)
	return (NULL);

dup = strdup(str);
if (fff == NULL)
{
free(nnode);
return (NULL);
}
for (tall = 0; str[tall];)
	tall++;

	nnode->str = fff;
	nnode->tall = tall;
	nnode->next = *head;

	*head = nnode;
return (nnode);
}
