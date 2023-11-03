#include "hash_tables.h"

/**
 * hash_table_get - a function retrieves a value associated with
 *                  a key in a hash table.
 * @ht: a pointer to the hash table.
 * @key: the key to search for in the hash table.
 * Return: NULL If the key is not found,
 * otherwise the value associated with the element 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int i;

	if (key == NULL || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	n = ht->array[i];

	for (; n != NULL; n = n->next)
	{
		if (strcmp(n->key, key) == 0)
			return (n->value);
	}
	return (NULL);
}
