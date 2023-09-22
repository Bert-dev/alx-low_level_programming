#include "lists.h"
/**
 * list_len - shows the number of node of a listint_t list.
 * @h: pointer to the header
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
