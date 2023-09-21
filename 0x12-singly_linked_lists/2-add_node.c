#include "lists.h"
/**
 * add_node- adds a node at the begining of a list.
 * @head: current head address
 * @str: new string
 * Return: the adress of new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[length])
		length++;
	new_node->len = length;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
