#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Description: This informations about dogs
 *	include name age and owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* dog_t - Typedef for dog*/
typedef struct dog dog_t

#endif
