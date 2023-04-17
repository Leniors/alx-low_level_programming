#include <stdio.h>
#include "dog.h"

/**
 * main - chechk code
 *
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 3.5;
	my_dog.owner = "bob";

	printf("my name is %s, and i am %.1f :) - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
