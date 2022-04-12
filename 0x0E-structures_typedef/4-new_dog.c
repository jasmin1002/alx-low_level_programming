#include "dog.h"
#include <string.h>
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

	int name_l = 0, own_l = 0;
	dog_t *ptrentry;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;

		ptrentry = malloc(sizeof(dog_t));

		if (ptrentry == NULL)
			return (NULL);

		ptrentry->name = malloc(sizeof(char) * name_l);

		if (ptrentry->name == NULL)
		{
			free(ptrentry);
			return (NULL);
		}

		ptrentry->owner = malloc(sizeof(char) * own_l);

		if (ptrentry->owner == NULL)
		{
			free(ptrentry->name);
			free(ptrentry);

			return (NULL);
		}

		ptrentry->name = strcpy(ptrentry->name, name);
		ptrentry->age = age;
		ptrentry->owner = strcpy(ptrentry->owner, owner);
	}

	return (ptrentry);
}
