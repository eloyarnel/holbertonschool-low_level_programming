#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
