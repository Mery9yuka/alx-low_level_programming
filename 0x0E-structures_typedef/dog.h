#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of a dog
 * @age: age of dog
 * @owner: dog's owner's name
 * description: dog struct description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
void free_dog(dog_t *d);

#endif
