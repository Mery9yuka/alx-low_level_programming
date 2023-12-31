#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of  hash table
 * Return: A pointer to the new hash table created, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int y;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
		return (NULL);

	for (y = 0; y < size; y++)
		hash_table->array[y] = NULL;

	return (hash_table);
}
