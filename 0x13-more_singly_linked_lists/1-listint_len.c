#include "lists.h"
#include <stddef.h>

/**
 * listint_len - shows the number of node of a listint_t list.
 * @h: pointer to the header address
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
