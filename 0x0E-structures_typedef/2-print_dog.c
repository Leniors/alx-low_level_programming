#include <stdlib.h>
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
	if (*d.name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("%s\n", *d.name);
	}
	if (*d.age == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("%d\n", *d.age);
	}
	if (*d.owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("%s\n", *d.owner);
	}
}
