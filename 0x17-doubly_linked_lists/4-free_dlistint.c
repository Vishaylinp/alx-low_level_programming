#include "lists.h"
/**
* free_dlistint - free list
* @head: pointer
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
