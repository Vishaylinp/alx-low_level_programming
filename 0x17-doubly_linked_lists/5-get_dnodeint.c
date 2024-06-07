#include "lists.h"
/**
* get_dnodeint_at_index - get index
* @head: pointer
* @index: index
* Return: nth node or null
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c = head;
	unsigned int count = 0;

	while (c != NULL)
	{
		if (count == index)
			return (c);

		c = c->next;
		count++;
	}
	return (NULL);
}
