#include "lists.h"
/**
* add_nodeint - add nodes at the beginning
* @head: head pointer
* @n: number
* Return: address
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes == NULL)
	{
		return (NULL);
	}
	new_nodes->n = n;
	new_nodes->next = *head;
	*head = new_nodes;
	return (*head);
}
