#include "main.h"

/**
 * get_endianness - function
 * Return: returns integer
 */
int get_endinnes(voi)
{
	unsigned int value = 1;
	char *byte_pointer = (char*) & value;

	return (int) (*byte_pointer);
}
