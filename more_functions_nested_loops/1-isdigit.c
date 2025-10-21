#include "main.h"

/**
 * _isdigit - Checks for a digit 0 through 9 
 * @c - The character t check 
 *
 * Return 1 if c is a digit
 */
int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		_putchar('\n');
		return (1);
	else 
		return (0);
	}
}
