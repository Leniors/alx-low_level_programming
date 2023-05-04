#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes
 * @c: char
 * Return: on succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
