#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: point to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *up = ht;
	hash_node_t *nod, *temp;
	unsigned long int y;

	for (y = 0; y < ht->size; y++)
	{
		if (ht->array[y] != NULL)
		{
			nod = ht->array[y];
			while (nod != NULL)
			{
				temp = nod->next;
				free(nod->key);
				free(nod->value);
				free(nod);
				nod = temp;
			}
		}
	}
	free(up->array);
	free(up);
}
