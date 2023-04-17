#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints
 * @d: stuct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("AGE: %f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", d->owner);
	}
}
