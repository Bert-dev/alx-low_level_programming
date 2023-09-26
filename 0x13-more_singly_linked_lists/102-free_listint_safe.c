#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - free a list
 * @h: pointer to head in function
 * Return: pointer to the first node of new list
 */

size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *next;
if (h == NULL || *h == NULL)
{
return (size);
}
current = *h;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
size++;
}
*h = NULL;
return (size);
}
