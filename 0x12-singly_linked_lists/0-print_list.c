#include "lists.h"
/**
* print_list - print ist given
* @h: head pointer
* Return: Nodes
*/
size_t print_list(const list_t *h)
{
	size_t  x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
