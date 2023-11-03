#include "hash_tables.h"
/**
* hash_table_set - a function that adds an element to the hash table.
* @ht: point to the hash table
* @key:  key to be updated
* @value: value to be associated with  key
* Return: Returns 1 in success, 0 in error
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *node = NULL, *sizes = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	sizes = ht->array[idx];
	while (sizes != NULL)
	{
		if (strcmp(sizes->key, key) == 0)
		{
			free(sizes->value);
			sizes->value = strdup(value);
			if (sizes->value == NULL)
				return (0);
			return (1);
		}
		sizes = sizes->next;
	} node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	} node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
