#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str != NULL)
{
printf("%s\n", h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
count++;
}
return (count);
}
