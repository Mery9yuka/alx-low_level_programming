#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - a function that initialize the struct dog
 * @d: dog to init
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: void.
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = strdup(name);
		(*d).age = age;
		(*d).owner = strdup(owner);
	}
}
