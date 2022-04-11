#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes struct dog fields with values.
 * @d: pointer to dog structure.
 * @name: pointer to dog structure's field name.
 * @age: formal argument field age.
 * @owner: pointer to dog structure's field owner.
 *
 * Return: void (nothing)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (name == NULL)
		name = "Doggy";

	if (owner == NULL)
		owner = "Owner";

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
