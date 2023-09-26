#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - print a list
 * @head: pointer to head in function
 * Return: pointer to the first node of new list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
node_count++;
head = head->next;
if (node_count > 1024)
{
exit(98);
}
}
return (node_count);
}
