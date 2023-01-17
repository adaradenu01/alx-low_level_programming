#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a dog
 *
 * @d: ponter to dog to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (none)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (none)\n");
	else
		printf("Owner: %s\n", d->owner);
}
