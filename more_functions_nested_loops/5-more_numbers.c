#include "main.h"

/**
 * main - write a function that prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, number;

	for (i = 0; i < 10; i++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
