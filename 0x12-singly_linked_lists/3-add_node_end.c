#include "lists.h"

/**
 * add_node_end - ...
 * @head: ...
 * @str: ...
 * Return: ...
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *nnn, *end;
int tall;
char *fff;

nnn = malloc(sizeof(list_t));
if (nnn == NULL)
{
return (NULL);
}
fff = strdup(str);
if (str == NULL)
{
free(nnn);
return (NULL);
}
for (tall = 0; str[tall];)
{
tall++;
}
nnn->str = fff;
nnn->len = tall;
nnn->next = NULL;
if (*head == NULL)
{
*head = nnn;
}
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = nnn;
}
return (*head);
}
