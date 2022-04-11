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

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age ? d->age : 0);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");

}
