#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes char
 * @c: char
 * Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
