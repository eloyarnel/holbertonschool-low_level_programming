#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses _putchar to print all
 * lowercase letters from 'a' to 'z', then prints a newline.
 */
void print_alphabet_x10(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a < 26; a++)
			_putchar(97 + a);
		_putchar('\n');
		i++;
	}
}
