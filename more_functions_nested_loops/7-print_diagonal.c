#include "main.h"
/**
 * main - write a function that draws a diagonal line on the terminal
 * @n: The number of \ characters to be printed.
 *
 * Return: Nothing
 */
void print_diagonal(int n);
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar(' ');
		_putchar('\\');

		if (line == n -1)
			continue;
		_putchar('\n');
		}
	}
	_putchar('\n');
}
