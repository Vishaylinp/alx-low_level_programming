#include "lists.h"
/**
* sum_dlistint - sum of list
* @head: pointer to head
*
* Return: sum of data or NULL
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int c = 0;
	int sum = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		sum = sum + h->n;
		h = h->next;
		c++;
	}
	return (sum);
}
