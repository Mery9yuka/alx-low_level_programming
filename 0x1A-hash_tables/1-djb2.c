#include "hash_tables.h"
/**
 * hash_djb2 - a hash function that implement the djb2 algorithm
 * @str: string that generate a hash value
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int y;

	hash_value = 5381;
	while ((y = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + y;
	}
	return (hash_value);
}
