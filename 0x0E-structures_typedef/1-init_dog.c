#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: dog to init
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct dog));
	}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
