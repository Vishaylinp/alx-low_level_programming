#include "lists.h"
/**
* dlistint_len - length of list
* @h: pointer
*
* Return: Return the number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
