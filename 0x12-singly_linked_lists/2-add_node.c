#include "lists.h"
/**
* add_node - add a node at the end of linked list
* @head: double pointer
* @str: string
* Return: return address of head
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int x = 0;

	while (str[x])
	{
		x++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = x;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
