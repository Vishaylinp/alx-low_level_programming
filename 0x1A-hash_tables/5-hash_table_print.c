#include "hash_tables.h"
/**
* hash_table_print - print hash table
* @ht: pointer
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned char flag;
	unsigned long int x;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (flag == 1)
				printf(", ");
			node = ht->array[x];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
				printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");

}
