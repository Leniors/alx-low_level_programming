#include "main.h"

/**
 * _isupper - used to check state of letter.
 * @c: char being checkrd.
 *
 * Return - 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
