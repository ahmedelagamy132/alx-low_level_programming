#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * list_len: no of elements
 * @h: ptr
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
size_t num = 0;

while (h != NULL)
{
h = h->next;
num++;
}
return (num);
}
