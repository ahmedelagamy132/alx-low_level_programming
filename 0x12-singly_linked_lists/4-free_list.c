#include "lists.h"

/**
 *free_list - ...
 *@head: ...
 *
 */

void free_list(list_t *head)
{
list_t *tttt;

while (head != '\0')
{
	tttt = head->next;
	free(head->str);
	free(head);
	head = tttt;
}
}
