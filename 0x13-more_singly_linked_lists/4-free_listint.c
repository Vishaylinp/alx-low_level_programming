#include "lists.h"
/**
* free_listint - free listint
* @head: head pointer
*/
void free_listint(listint_t *head)
{
	listint_t *temp_v;

	while (head->next)
	{
		temp_v = head->next;
		free(head);
		head = temp_v;
	}
	free(head);
}
