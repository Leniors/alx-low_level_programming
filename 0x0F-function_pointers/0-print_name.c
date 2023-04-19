#include <stdio.h>

/**
 * print_name - prints name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	f = print_name;
}
