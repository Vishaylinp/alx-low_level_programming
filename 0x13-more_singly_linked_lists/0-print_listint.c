#include "lists.h"
/**
* print_listint - print the structure
* @h: head pointer
* Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
