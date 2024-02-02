#include "hash_tables.h"
/**
* hash_table_set - set a node in a hashtable
* @ht: pointer to hash table
* @key: key
* @value: value
* Return: 1
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_n;
	unsigned long int index, i;
	char *dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup = strdup(value);
	if (dup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup;
			return (1);
		}
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
	{
		free(dup);
		return (0);
	}
	new_n->key = strdup(key);
	if (new_n->key == NULL)
	{
		free(new_n);
		return (0);
	}
	new_n->value = dup;
	new_n->next = ht->array[i];
	ht->array[i] = new_n;

	return (1);

}
