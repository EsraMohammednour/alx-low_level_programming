#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: char variable
 * @age: float variable
 * @owner: char variable
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int n, o;

	n = strlen(name);
	o = strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);
	new_dog->name = malloc((n + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = strcpy(new_dog->name, name);
	new_dog->owner = malloc((o + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
