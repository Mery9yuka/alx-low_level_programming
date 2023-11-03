#include "hash_tables.h"
/**
 * key_index - a function that gives the index of a key.
 * @key: The key
 * @size: The size of array of hash table
 * Return: hash table index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
