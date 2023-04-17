#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dn;

	dn = malloc(sizeof(struct dog));
	if (dn == NULL)
	{
		return (NULL);
	}
	dn->name = name;
	dn->age = age;
	dn->owner = owner;
}
