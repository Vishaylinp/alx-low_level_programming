#include "lists.h"
/**
* add_node_end - add node at th end
* @head: double pointer
* @str: string
* Return: adress of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes;
	list_t *temp_value = *head;
	unsigned int x = 0;

	while (str[x])
	{
		x++;
	}
	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
	{
		return (NULL);
	}
	new_nodes->str = strdup(str);
	new_nodes->len = x;
	new_nodes->next = NULL;
	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}
	while (temp_value->next != NULL)
	{
		temp_value = temp->next;
	}
		temp_value->next = new_nodes;
		return (new_nodes);
}
