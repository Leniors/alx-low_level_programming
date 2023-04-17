#ifndef DOG_H
#define DOG_H
/**
 * struct dog - basic info
 * @name: name
 * @age: age
 * @owner: owner
 * Description: longer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

