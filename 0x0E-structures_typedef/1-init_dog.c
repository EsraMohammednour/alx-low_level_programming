#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
