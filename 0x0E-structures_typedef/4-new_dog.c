#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: formal argument for name
 * @age: formal argument for age
 * @owner: formal argument for owner
 *
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t entry;
	dog_t *ptrentry = &entry;

	entry.name = name;
	entry.age = age;
	entry.owner = owner;

	return (ptrentry);
}
