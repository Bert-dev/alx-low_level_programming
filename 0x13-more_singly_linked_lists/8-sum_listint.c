#include "lists.h"
#include <stdio.h>
/**
 * sum_listint -  returns the sum of all nodes
 * @head: pointer to head in function
 * Return: the sum result
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
