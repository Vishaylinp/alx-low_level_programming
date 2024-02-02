#include "hash_tables.h"
/**
* hash_table_get - get a value associated with key
* @ht: pointer to hashtable
* @key: key
* Return: value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *h;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	h = ht->array[index];
	while (h != NULL && strcmp(h->key, key) != 0)
	{
		h = h->next;
	}
	if (h == NULL)
	{
		return (NULL);
	}
	else
		return (h->value);
}
