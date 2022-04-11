#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - displays the elements in struct dog.
 * @d: pointer to dog structure.
 *
 * Return: void (nothing).
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("%d\n", 0);
	else
		printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
