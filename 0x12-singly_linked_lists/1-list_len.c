#include "lists.h"
/**
* list_len - length of the list
* @h: header pointer
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
