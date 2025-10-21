#include "main.h"
/**
 * main - A function that draws a straight line in the terminal.
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int lin;

	if (n > 0)
	{
		for (lin = 0; lin < n; lin++)
			_putchar('_');
	}
	_putchar('\n');
}
