#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_listint(listint_t *head)
{
listint_t  *t;
while (head != NULL)
{
t = head;
head = head->next;
free(t);
}
}
