#include "main.h"
/**
 * main - A function that draws a straight line in the terminal.
 *
 * Return: Nothing
 */
void print_line_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
