#include "hash_tables.h"

/**
 * hash_table_print - A function that print a hash table
 * @ht:  hash table to be printed
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *y;
	unsigned long int u = 0, k = 0;

	if (ht != NULL)
	{
		printf("{");
		for (k = 0; k < ht->size; k++)
		{
			y = ht->array[k];
			while (y != NULL)
			{
				if (u != 0)
					printf(", ");
				u = 1;
				printf("'%s': '%s'", y->key, y->value);
				y = y->next;
			}
		}
		printf("}\n");
	}
}
