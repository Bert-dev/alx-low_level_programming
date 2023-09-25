#include<stdio.h>
#include "lists.h"
/**
 * print_listint - print number of nodes
 *@h:parameter
 *@count:variable
 *return 0;
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("The number of nodes :%d \n", h->n);
h = h->next;
count++;
}
return (count);
}
