#include "main.h"
/**
 * print_square - Prints a square using the character '#'
 * @size: The size of the square
 *
 * Description: If size is 0 or less, the function prints only a new line.
 * Return: void
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
