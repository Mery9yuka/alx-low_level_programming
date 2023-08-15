#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer where the string is copied
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - get the length of a string
 * @str: string to get the length
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int j = 0;

	while (*str++)
		j++;
	return (j);
}
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: the name of the dog
 * @age: Age of the dog as a float
 * @owner: the owner of the dog
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int m, n;

	m = _strlen(name);
	n = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (m + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (n + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
