#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints list
 * @h: ptr
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
