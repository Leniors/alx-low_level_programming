#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - feees
 * @d: stuct dog free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
