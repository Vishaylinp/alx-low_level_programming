#include "lists.h"
/**
* free_list - free memory
* @head: head pointer
*/
void free_list(list_t *head)
{
	list_t *temp_v;

	while (head)
	{
		temp_v = head->next;
		free(head->str);
		free(head);
		head = temp_v;
	}
}
