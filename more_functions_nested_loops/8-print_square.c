#include "main.h"
/**
 * main - Write a function that prints a aquare, followed by a new line
 * @size: The size of the squeare.
 *
 */
void print_square(int size)
{
	int high, wid;

	if (size > 0)
	{
		for (high = 0; high < size; high++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (high == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
