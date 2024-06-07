#include "lists.h"
/**
* add_dnodeint_end - Add node at end
* @head: pointer
* @n: int
* Return: address of new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n;
	dlistint_t *temp = *head;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		(*head) = new_n;
		return (new_n);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_n;
	new_n->prev = temp;

	return (new_n);
}
